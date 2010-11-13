from os.path import join

PREFIX          = "/usr/local"
LIBDIR          = "/usr/local/lib"
DATADIR         = "/usr/local/share"
DOCDIR          = "/usr/local/share/doc/cherokee"
LOCALEDIR       = "/usr/local/share/locale"
WWWROOT         = "/usr/local/var/www"
SYSCONFDIR      = "/usr/local/etc"
LOCALSTATE      = "/usr/local/var"
VERSION         = "1.0.9"
OWS_ENABLE      = '0'
OWS_API_VERSION = '2'

CHEROKEE_SERVER       = join (PREFIX, "sbin/cherokee")
CHEROKEE_WORKER       = join (PREFIX, "sbin/cherokee-worker")
CHEROKEE_ADMINDIR     = join (PREFIX, "share/cherokee/admin")
CHEROKEE_ICONSDIR     = join (PREFIX, "share/cherokee/icons")
CHEROKEE_THEMEDIR     = join (PREFIX, "share/cherokee/themes")
CHEROKEE_PANIC_PATH   = join (PREFIX, "bin/cherokee-panic")
CHEROKEE_PLUGINDIR    = join (LIBDIR, "cherokee")
CHEROKEE_DATADIR      = join (DATADIR, "cherokee")
CHEROKEE_DEPSDIR      = join (DATADIR, "cherokee/deps")
CHEROKEE_CONFDIR      = join (SYSCONFDIR, "cherokee")
CHEROKEE_VAR_LOG      = join (LOCALSTATE, "log")
CHEROKEE_VAR_RUN      = join (LOCALSTATE, "run")
CHEROKEE_VAR_LIB      = join (LOCALSTATE, "lib/cherokee")
CHEROKEE_RRD_DIR      = join (LOCALSTATE, "lib/cherokee/graphs")
CHEROKEE_OWS_DIR      = join (LOCALSTATE, "lib/cherokee/ows")
CHEROKEE_OWS_ROOT     = join (LOCALSTATE, "lib/cherokee/ows/root")