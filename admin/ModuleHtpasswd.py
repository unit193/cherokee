import validations

from Table import *
from ModuleAuth import *

DATA_VALIDATION = [
    ('vserver!.*?!(directory|extensions|request)!.*?!passwdfile', 
     (validations.is_local_file_exists, 'cfg'))
]

NOTE_PASSWD = "Full path to the Htpasswd formated password file."

class ModuleHtpasswd (ModuleAuthBase):
    PROPERTIES = ModuleAuthBase.PROPERTIES + [
        'passwdfile'
    ]

    METHODS = ['basic']

    def __init__ (self, cfg, prefix, submit):
        ModuleAuthBase.__init__ (self, cfg, prefix, 'htpasswd', submit)

    def _op_render (self):
        txt  = ModuleAuthBase._op_render (self)

        table = TableProps()
        self.AddPropEntry (table, "Password File", "%s!passwdfile"%(self._prefix), NOTE_PASSWD)

        txt += "<h2>Htpasswd file</h2>"
        txt += self.Indent(table)
        return txt

    def _op_apply_changes (self, uri, post):
        pre = '%s!passwdfile' % (self._prefix)
        self.Validate_NotEmpty (post, pre, 'Password file can not be empty')

        self.ApplyChanges ([], post, DATA_VALIDATION)
        ModuleAuthBase._op_apply_changes (self, uri, post)
