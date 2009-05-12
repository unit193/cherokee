import validations

from Page import *
from Table import *
from Entry import *
from Form import *
from config import *

# For gettext
N_ = lambda x: x

HELPS = [('index', "Index")]

WARNING_NOT_FOUND = N_("<b>The configuration is not found</b>.<br />You can create a new configuration file and proceed to customize the web server.")

BUTTON = """
   <p style="text-align: center;">
    <a class="button" href="%s">
      <span>%s</span>
    </a>
   </p>
""" % ('%s', N_('Create'))

CONFIG_TABLE = """
<div align="center">
  <table id="table_new_file">
  <tr><th>%s</th><th>%s</th><th>%s</th></tr>
  <tr>
   <td>
     %s
   </td><td>
     %s
   </td><td>
     %s
   </td>
  <tr><td>%s</td><td>%s</td><td>%s</td></tr>
  </tr></table>
</div>
""" % (N_('Regular'), N_('Static Content'), N_('Server Development'),
       N_('Regular configuration: PHP, Apache logs, MIME types, icons, etc.'),
       N_('Optimized to send static content.'),
       N_('No standard port, No log files, No PID file, etc.'),
       BUTTON %("/create_config/regular"),
       BUTTON %("/create_config/performance"),
       BUTTON %("/create_config/development"))

class PageNewConfig (Page, FormHelper):
    def __init__ (self, cfg):
        Page.__init__ (self, 'new_config', cfg)
        FormHelper.__init__ (self, 'new_config', cfg)
        self.set_submit_url ("/%s/"%(self._id))

    def _op_handler (self, uri, post):
        if uri == "/regular":
            manager = cherokee_management_get (self._cfg)
            if not manager.create_config (self._cfg.file, "cherokee.conf.sample"):
                return None
            cherokee_management_reset()
            return "/"
        elif uri == "/performance":
            manager = cherokee_management_get (self._cfg)
            if not manager.create_config (self._cfg.file, "performance.conf.sample"):
                return None
            cherokee_management_reset()
            return "/"
        elif uri == "/development":
            manager = cherokee_management_get (self._cfg)
            if not manager.create_config (self._cfg.file, "cherokee.conf.sample"):
                return None
            self._tweak_config_for_dev()
            cherokee_management_reset()
            return "/"
        else:
            return self._op_render()

    def _op_render (self):
        content = self._render_content()

        self.AddMacroContent ('menu', '')
        self.AddMacroContent ('help', '')
        self.AddMacroContent ('body', PAGE_BASIC_LAYOUT)
        self.AddMacroContent ('title', _('New Configuration File'))
        self.AddMacroContent ('content', content)
        self.AddMacroContent ('cherokee_conf', self._cfg.file)
        self.AddMacroContent ('icons_dir', CHEROKEE_ICONSDIR)
        return Page.Render(self)

    def _render_content (self):
        txt = "<h1>%s</h1>" % (_('Configuration File Not Found'))
        txt += self.Dialog(WARNING_NOT_FOUND, type_='warning')

        txt += "<h2>%s</h2>" % (_('Create a new configuration file'))
        txt += CONFIG_TABLE
        return txt

    def _tweak_config_for_dev (self):
        self._cfg = Config (self._cfg.file)

        del(self._cfg['server!bind'])
        del(self._cfg['server!pid_file'])
        del(self._cfg['vserver!1!logger'])

        self._cfg['server!bind!1!port']            = "1234"
        self._cfg['vserver!1!rule!5!handler!type'] = "normal"

        self._cfg['source!2!type'] = "host"
        self._cfg['source!2!nick'] = "localhost 8000"
        self._cfg['source!2!host'] = "localhost:8000"

        self._cfg.save()