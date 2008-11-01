import base64

from conf import *
from base import *

MAGIC       = "Cherokee supports SHA1 password hashes"
REALM       = "realm"
USER        = "username"
PASSWD      = "alo"
PASSWD_SHA1 = "{SHA}yQ4y0eYX/0yw69R4ne1+0QmBpec="


class Test (TestBase):
    def __init__ (self):
        TestBase.__init__ (self)

        auth = base64.encodestring ("%s:%s" % (USER, PASSWD))[:-1]

        self.name             = "Basic Auth, htpasswd: SHA1"
        self.expected_error   = 200
        self.expected_content = MAGIC
        self.request          = "GET /htpasswd_sha1/file HTTP/1.0\r\n" + \
                                "Authorization: Basic %s\r\n" % (auth)

    def Prepare (self, www):
        tdir  = self.Mkdir (www, "htpasswd_sha1")
        passf = self.WriteFile (tdir, "passwd", 0444, '%s:%s\n' %(USER, PASSWD_SHA1))
        self.WriteFile (tdir, "file", 0444, MAGIC)

        self.conf             = """Directory /htpasswd_sha1 {
                                     Handler file
                                     Auth Basic {
                                          Name "%s"
                                          Method htpasswd { PasswdFile %s }
                                     }
                                }""" % (REALM, passf)
