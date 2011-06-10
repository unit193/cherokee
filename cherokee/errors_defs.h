/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/* Cherokee
 *
 * Authors:
 *      Alvaro Lopez Ortega <alvaro@alobbs.com>
 *
 * Copyright (C) 2001-2010 Alvaro Lopez Ortega
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/* NOTE: File automatically generated (by error_list.py). */

#define CHEROKEE_ERROR_PROXY_HEADER_PARSE              0
#define CHEROKEE_ERROR_SOURCE_NONBLOCK                 1
#define CHEROKEE_ERROR_RRD_NO_BINARY                   2
#define CHEROKEE_ERROR_RRD_EXECV                       3
#define CHEROKEE_ERROR_RRD_FORK                        4
#define CHEROKEE_ERROR_RRD_WRITE                       5
#define CHEROKEE_ERROR_RRD_DIR_PERMS                   6
#define CHEROKEE_ERROR_RRD_MKDIR_WRITE                 7
#define CHEROKEE_ERROR_BALANCER_IP_REACTIVE            8
#define CHEROKEE_ERROR_BALANCER_IP_DISABLE             9
#define CHEROKEE_ERROR_BALANCER_IP_EXHAUSTED           10
#define CHEROKEE_ERROR_BALANCER_FAILOVER_REACTIVE      11
#define CHEROKEE_ERROR_BALANCER_FAILOVER_DISABLE       12
#define CHEROKEE_ERROR_BALANCER_FAILOVER_ENABLE_ALL    13
#define CHEROKEE_ERROR_RESOLVE_TIMEOUT                 14
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_USER         15
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_PASSWORD     16
#define CHEROKEE_ERROR_VALIDATOR_AUTHLIST_EMPTY        17
#define CHEROKEE_ERROR_VALIDATOR_PAM_DELAY             18
#define CHEROKEE_ERROR_VALIDATOR_PAM_AUTH              19
#define CHEROKEE_ERROR_VALIDATOR_PAM_ACCOUNT           20
#define CHEROKEE_ERROR_VALIDATOR_LDAP_KEY              21
#define CHEROKEE_ERROR_VALIDATOR_LDAP_PROPERTY         22
#define CHEROKEE_ERROR_VALIDATOR_LDAP_SECURITY         23
#define CHEROKEE_ERROR_VALIDATOR_LDAP_CONNECT          24
#define CHEROKEE_ERROR_VALIDATOR_LDAP_V3               25
#define CHEROKEE_ERROR_VALIDATOR_LDAP_CA               26
#define CHEROKEE_ERROR_VALIDATOR_LDAP_STARTTLS         27
#define CHEROKEE_ERROR_VALIDATOR_LDAP_BIND             28
#define CHEROKEE_ERROR_VALIDATOR_LDAP_SEARCH           29
#define CHEROKEE_ERROR_VALIDATOR_FILE                  30
#define CHEROKEE_ERROR_VALIDATOR_FILE_NO_FILE          31
#define CHEROKEE_ERROR_VALIDATOR_METHOD_UNKNOWN        32
#define CHEROKEE_ERROR_HANDLER_REGEX_GROUPS            33
#define CHEROKEE_ERROR_HANDLER_NO_BALANCER             34
#define CHEROKEE_ERROR_HANDLER_SECDOWN_SECRET          35
#define CHEROKEE_ERROR_HANDLER_SRV_INFO_MOD            36
#define CHEROKEE_ERROR_HANDLER_SRV_INFO_TYPE           37
#define CHEROKEE_ERROR_HANDLER_FILE_TIME_PARSE         38
#define CHEROKEE_ERROR_HANDLER_SSI_PROPERTY            39
#define CHEROKEE_ERROR_HANDLER_FCGI_VERSION            40
#define CHEROKEE_ERROR_HANDLER_FCGI_PARSING            41
#define CHEROKEE_ERROR_HANDLER_FCGI_STDERR             42
#define CHEROKEE_ERROR_HANDLER_FCGI_BALANCER           43
#define CHEROKEE_ERROR_HANDLER_ERROR_REDIR_CODE        44
#define CHEROKEE_ERROR_HANDLER_ERROR_REDIR_URL         45
#define CHEROKEE_ERROR_HANDLER_DIRLIST_THEME           46
#define CHEROKEE_ERROR_HANDLER_DIRLIST_BAD_THEME       47
#define CHEROKEE_ERROR_HANDLER_POST_REPORT_LANG        48
#define CHEROKEE_ERROR_HANDLER_DBSLAYER_LANG           49
#define CHEROKEE_ERROR_HANDLER_DBSLAYER_BALANCER       50
#define CHEROKEE_ERROR_HANDLER_CUSTOM_ERROR_HTTP       51
#define CHEROKEE_ERROR_HANDLER_CGI_SET_PROP            52
#define CHEROKEE_ERROR_HANDLER_CGI_SETID               53
#define CHEROKEE_ERROR_HANDLER_CGI_EXECUTE             54
#define CHEROKEE_ERROR_HANDLER_CGI_CREATEPROCESS       55
#define CHEROKEE_ERROR_HANDLER_CGI_GET_HOSTNAME        56
#define CHEROKEE_ERROR_CONFIG_ENTRY_BAD_TYPE           57
#define CHEROKEE_ERROR_BALANCER_EMPTY                  58
#define CHEROKEE_ERROR_BALANCER_UNDEFINED              59
#define CHEROKEE_ERROR_BALANCER_NO_KEY                 60
#define CHEROKEE_ERROR_BALANCER_BAD_SOURCE             61
#define CHEROKEE_ERROR_BALANCER_ONLINE_SOURCE          62
#define CHEROKEE_ERROR_BALANCER_OFFLINE_SOURCE         63
#define CHEROKEE_ERROR_BALANCER_EXHAUSTED              64
#define CHEROKEE_ERROR_ENCODER_NOT_SET_VALUE           65
#define CHEROKEE_ERROR_ENCODER_DEFLATEINIT2            66
#define CHEROKEE_ERROR_ENCODER_DEFLATEEND              67
#define CHEROKEE_ERROR_ENCODER_DEFLATE                 68
#define CHEROKEE_ERROR_LOGGER_NO_KEY                   69
#define CHEROKEE_ERROR_LOGGER_NO_WRITER                70
#define CHEROKEE_ERROR_LOGGER_WRITER_UNKNOWN           71
#define CHEROKEE_ERROR_LOGGER_WRITER_READ              72
#define CHEROKEE_ERROR_LOGGER_WRITER_APPEND            73
#define CHEROKEE_ERROR_LOGGER_WRITER_ALLOC             74
#define CHEROKEE_ERROR_LOGGER_WRITER_PIPE              75
#define CHEROKEE_ERROR_LOGGER_WRITER_FORK              76
#define CHEROKEE_ERROR_LOGGER_X_REAL_IP_PARSE          77
#define CHEROKEE_ERROR_LOGGER_CUSTOM_NO_TEMPLATE       78
#define CHEROKEE_ERROR_LOGGER_CUSTOM_TEMPLATE          79
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_ADD            80
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_DEL            81
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CTL_MOD            82
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CREATE             83
#define CHEROKEE_ERROR_FDPOLL_EPOLL_CLOEXEC            84
#define CHEROKEE_ERROR_FDPOLL_PORTS_FD_ASSOCIATE       85
#define CHEROKEE_ERROR_FDPOLL_PORTS_ASSOCIATE          86
#define CHEROKEE_ERROR_FDPOLL_PORTS_GETN               87
#define CHEROKEE_ERROR_FDPOLL_POLL_FULL                88
#define CHEROKEE_ERROR_FDPOLL_POLL_DEL                 89
#define CHEROKEE_ERROR_FDPOLL_KQUEUE                   90
#define CHEROKEE_ERROR_GEN_EVHOST_TPL_DROOT            91
#define CHEROKEE_ERROR_GEN_EVHOST_PARSE                92
#define CHEROKEE_ERROR_VRULE_NO_PROPERTY               93
#define CHEROKEE_ERROR_VRULE_TARGET_IP_PARSE           94
#define CHEROKEE_ERROR_VRULE_REHOST_NO_DOMAIN          95
#define CHEROKEE_ERROR_RULE_NO_PROPERTY                96
#define CHEROKEE_ERROR_RULE_REQUEST_NO_TABLE           97
#define CHEROKEE_ERROR_RULE_REQUEST_NO_PCRE_PTR        98
#define CHEROKEE_ERROR_RULE_METHOD_UNKNOWN             99
#define CHEROKEE_ERROR_RULE_HEADER_UNKNOWN_HEADER      100
#define CHEROKEE_ERROR_RULE_HEADER_UNKNOWN_TYPE        101
#define CHEROKEE_ERROR_RULE_FROM_ENTRY                 102
#define CHEROKEE_ERROR_RULE_BIND_PORT                  103
#define CHEROKEE_ERROR_SERVER_GROUP_NOT_FOUND          104
#define CHEROKEE_ERROR_SERVER_USER_NOT_FOUND           105
#define CHEROKEE_ERROR_SERVER_THREAD_IGNORE            106
#define CHEROKEE_ERROR_SERVER_THREAD_POLICY            107
#define CHEROKEE_ERROR_SERVER_TOKEN                    108
#define CHEROKEE_ERROR_SERVER_POLLING_UNRECOGNIZED     109
#define CHEROKEE_ERROR_SERVER_POLLING_UNSUPPORTED      110
#define CHEROKEE_ERROR_SERVER_POLLING_UNKNOWN          111
#define CHEROKEE_ERROR_SERVER_NO_BIND                  112
#define CHEROKEE_ERROR_SERVER_IGNORE_TLS               113
#define CHEROKEE_ERROR_SERVER_TLS_DEFAULT              114
#define CHEROKEE_ERROR_SERVER_NO_CRYPTOR               115
#define CHEROKEE_ERROR_SERVER_PARSE                    116
#define CHEROKEE_ERROR_SERVER_INITGROUPS               117
#define CHEROKEE_ERROR_SERVER_SETGID                   118
#define CHEROKEE_ERROR_SERVER_SETUID                   119
#define CHEROKEE_ERROR_SERVER_GET_FDLIMIT              120
#define CHEROKEE_ERROR_SERVER_FDS_SYS_LIMIT            121
#define CHEROKEE_ERROR_SERVER_THREAD_POLL              122
#define CHEROKEE_ERROR_SERVER_NEW_THREAD               123
#define CHEROKEE_ERROR_SERVER_TLS_INIT                 124
#define CHEROKEE_ERROR_SERVER_FD_SET                   125
#define CHEROKEE_ERROR_SERVER_FD_GET                   126
#define CHEROKEE_ERROR_SERVER_LOW_FD_LIMIT             127
#define CHEROKEE_ERROR_SERVER_UID_GET                  128
#define CHEROKEE_ERROR_SERVER_CHROOT                   129
#define CHEROKEE_ERROR_SERVER_CHDIR                    130
#define CHEROKEE_ERROR_SERVER_SOURCE                   131
#define CHEROKEE_ERROR_SERVER_SOURCE_TYPE              132
#define CHEROKEE_ERROR_SERVER_SOURCE_TYPE_UNKNOWN      133
#define CHEROKEE_ERROR_SERVER_VSERVER_PRIO             134
#define CHEROKEE_ERROR_SERVER_NO_VSERVERS              135
#define CHEROKEE_ERROR_SERVER_NO_DEFAULT_VSERVER       136
#define CHEROKEE_ERROR_SERVER_FORK                     137
#define CHEROKEE_ERROR_SERVER_PANIC                    138
#define CHEROKEE_ERROR_SRC_INTER_NO_USER               139
#define CHEROKEE_ERROR_SRC_INTER_NO_GROUP              140
#define CHEROKEE_ERROR_SRC_INTER_EMPTY_INTERPRETER     141
#define CHEROKEE_ERROR_SRC_INTER_NO_INTERPRETER        142
#define CHEROKEE_ERROR_SRC_INTER_ENV_IN_COMMAND        143
#define CHEROKEE_ERROR_SRC_INTER_SPAWN                 144
#define CHEROKEE_ERROR_CONF_READ_ACCESS_FILE           145
#define CHEROKEE_ERROR_CONF_READ_CHILDREN_SAME_NODE    146
#define CHEROKEE_ERROR_CONF_READ_PARSE                 147
#define CHEROKEE_ERROR_TEMPLATE_NO_TOKEN               148
#define CHEROKEE_ERROR_SPAWNER_TMP_INIT                149
#define CHEROKEE_ERROR_SPAWNER_UNLOCK_SEMAPHORE        150
#define CHEROKEE_ERROR_HTTP_UNKNOWN_CODE               151
#define CHEROKEE_ERROR_ICONS_NO_DEFAULT                152
#define CHEROKEE_ERROR_ICONS_ASSIGN_SUFFIX             153
#define CHEROKEE_ERROR_ICONS_DUP_SUFFIX                154
#define CHEROKEE_ERROR_HEADER_EMPTY                    155
#define CHEROKEE_ERROR_HEADER_NO_EOH                   156
#define CHEROKEE_ERROR_HEADER_TOO_MANY_CRLF            157
#define CHEROKEE_ERROR_HEADER_ADD_HEADER               158
#define CHEROKEE_ERROR_SOCKET_NO_IPV6                  159
#define CHEROKEE_ERROR_SOCKET_NEW_SOCKET               160
#define CHEROKEE_ERROR_SOCKET_SET_LINGER               161
#define CHEROKEE_ERROR_SOCKET_RM_NAGLES                162
#define CHEROKEE_ERROR_SOCKET_NON_BLOCKING             163
#define CHEROKEE_ERROR_SOCKET_NO_SOCKET                164
#define CHEROKEE_ERROR_SOCKET_REMOVE                   165
#define CHEROKEE_ERROR_SOCKET_WRITE                    166
#define CHEROKEE_ERROR_SOCKET_READ                     167
#define CHEROKEE_ERROR_SOCKET_WRITEV                   168
#define CHEROKEE_ERROR_SOCKET_CONNECT                  169
#define CHEROKEE_ERROR_SOCKET_BAD_FAMILY               170
#define CHEROKEE_ERROR_SOCKET_SET_NODELAY              171
#define CHEROKEE_ERROR_SOCKET_RM_NODELAY               172
#define CHEROKEE_ERROR_SOCKET_SET_CORK                 173
#define CHEROKEE_ERROR_SOCKET_RM_CORK                  174
#define CHEROKEE_ERROR_THREAD_RM_FD_POLL               175
#define CHEROKEE_ERROR_THREAD_HANDLER_RET              176
#define CHEROKEE_ERROR_THREAD_OUT_OF_FDS               177
#define CHEROKEE_ERROR_THREAD_GET_CONN_OBJ             178
#define CHEROKEE_ERROR_THREAD_SET_SOCKADDR             179
#define CHEROKEE_ERROR_THREAD_CREATE                   180
#define CHEROKEE_ERROR_CONNECTION_AUTH                 181
#define CHEROKEE_ERROR_CONNECTION_LOCAL_DIR            182
#define CHEROKEE_ERROR_CONNECTION_GET_VSERVER          183
#define CHEROKEE_ERROR_NCPUS_PSTAT                     184
#define CHEROKEE_ERROR_NCPUS_HW_NCPU                   185
#define CHEROKEE_ERROR_NCPUS_SYSCONF                   186
#define CHEROKEE_ERROR_INIT_CPU_NUMBER                 187
#define CHEROKEE_ERROR_INIT_GET_FD_LIMIT               188
#define CHEROKEE_ERROR_UTIL_F_GETFL                    189
#define CHEROKEE_ERROR_UTIL_F_SETFL                    190
#define CHEROKEE_ERROR_UTIL_F_GETFD                    191
#define CHEROKEE_ERROR_UTIL_F_SETFD                    192
#define CHEROKEE_ERROR_UTIL_MKDIR                      193
#define CHEROKEE_ERROR_AVL_PREVIOUS                    194
#define CHEROKEE_ERROR_AVL_NEXT                        195
#define CHEROKEE_ERROR_AVL_BALANCE                     196
#define CHEROKEE_ERROR_BUFFER_NEG_ESTIMATION           197
#define CHEROKEE_ERROR_BUFFER_NO_SPACE                 198
#define CHEROKEE_ERROR_BUFFER_BAD_ESTIMATION           199
#define CHEROKEE_ERROR_BUFFER_AVAIL_SIZE               200
#define CHEROKEE_ERROR_BUFFER_OPEN_FILE                201
#define CHEROKEE_ERROR_BUFFER_READ_FILE                202
#define CHEROKEE_ERROR_PLUGIN_LOAD_NO_SYM              203
#define CHEROKEE_ERROR_PLUGIN_DLOPEN                   204
#define CHEROKEE_ERROR_PLUGIN_NO_INIT                  205
#define CHEROKEE_ERROR_PLUGIN_NO_OPEN                  206
#define CHEROKEE_ERROR_PLUGIN_NO_INFO                  207
#define CHEROKEE_ERROR_VSERVER_BAD_METHOD              208
#define CHEROKEE_ERROR_VSERVER_TIME_MISSING            209
#define CHEROKEE_ERROR_VSERVER_RULE_UNKNOWN_KEY        210
#define CHEROKEE_ERROR_VSERVER_TYPE_MISSING            211
#define CHEROKEE_ERROR_VSERVER_LOAD_MODULE             212
#define CHEROKEE_ERROR_VSERVER_BAD_PRIORITY            213
#define CHEROKEE_ERROR_VSERVER_RULE_MATCH_MISSING      214
#define CHEROKEE_ERROR_VSERVER_MATCH_MISSING           215
#define CHEROKEE_ERROR_VSERVER_UNKNOWN_KEY             216
#define CHEROKEE_ERROR_VSERVER_NICK_MISSING            217
#define CHEROKEE_ERROR_VSERVER_DROOT_MISSING           218
#define CHEROKEE_ERROR_VSERVER_FLCACHE_UNKNOWN_POLICY  219
#define CHEROKEE_ERROR_REGEX_COMPILATION               220
#define CHEROKEE_ERROR_ACCESS_IPV4_MAPPED              221
#define CHEROKEE_ERROR_ACCESS_INVALID_IP               222
#define CHEROKEE_ERROR_ACCESS_INVALID_MASK             223
#define CHEROKEE_ERROR_BIND_PORT_NEEDED                224
#define CHEROKEE_ERROR_BIND_COULDNT_BIND_PORT          225
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_EXEC         226
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_EMPTY_REPLY  227
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_MSG          228
#define CHEROKEE_ERROR_HANDLER_RENDER_RRD_INVALID_REQ  229
#define CHEROKEE_ERROR_COLLECTOR_COMMAND_EXEC          230
#define CHEROKEE_ERROR_COLLECTOR_NEW_THREAD            231
#define CHEROKEE_ERROR_COLLECTOR_NEW_MUTEX             232
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_HASH            233
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_KEY             234
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_USER            235
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_DATABASE        236
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_QUERY           237
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_SOURCE          238
#define CHEROKEE_ERROR_VALIDATOR_MYSQL_NOCONN          239
#define CHEROKEE_ERROR_ERRORLOG_PARAM                  240
#define CHEROKEE_ERROR_SSL_NO_ENTROPY                  241
#define CHEROKEE_ERROR_SSL_SOCKET                      242
#define CHEROKEE_ERROR_SSL_SRV_MATCH                   243
#define CHEROKEE_ERROR_SSL_CHANGE_CTX                  244
#define CHEROKEE_ERROR_SSL_ALLOCATE_CTX                245
#define CHEROKEE_ERROR_SSL_CIPHER                      246
#define CHEROKEE_ERROR_SSL_CERTIFICATE                 247
#define CHEROKEE_ERROR_SSL_KEY                         248
#define CHEROKEE_ERROR_SSL_KEY_MATCH                   249
#define CHEROKEE_ERROR_SSL_CA_READ                     250
#define CHEROKEE_ERROR_SSL_CA_LOAD                     251
#define CHEROKEE_ERROR_SSL_SESSION_ID                  252
#define CHEROKEE_ERROR_SSL_SNI                         253
#define CHEROKEE_ERROR_SSL_CONNECTION                  254
#define CHEROKEE_ERROR_SSL_FD                          255
#define CHEROKEE_ERROR_SSL_INIT                        256
#define CHEROKEE_ERROR_SSL_SW_DEFAULT                  257
#define CHEROKEE_ERROR_SSL_SW_ERROR                    258
#define CHEROKEE_ERROR_SSL_SR_DEFAULT                  259
#define CHEROKEE_ERROR_SSL_SR_ERROR                    260
#define CHEROKEE_ERROR_SSL_CREATE_CTX                  261
#define CHEROKEE_ERROR_SSL_CTX_LOAD                    262
#define CHEROKEE_ERROR_SSL_CTX_SET                     263
#define CHEROKEE_ERROR_SSL_SNI_SRV                     264
#define CHEROKEE_ERROR_SSL_CONNECT                     265
#define CHEROKEE_ERROR_SSL_PKCS11                      266
#define CHEROKEE_ERROR_SSL_DEFAULTS                    267
#define CHEROKEE_ERROR_FLCACHE_MKDIR                   268
#define CHEROKEE_ERROR_FLCACHE_CREATE_FILE             269
