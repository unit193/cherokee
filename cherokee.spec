# Cherokee
# Copyright (C) 2001-2006 Alvaro Lopez Ortega

Name:           cherokee
Version:        0.5.0
Release:        1
License:        GPL
BuildRoot:      %{_tmppath}/%{name}-%{version}-build
Docdir:         %{_datadir}/doc
Autoreqprov:    on
Source:         %{name}-%{version}.tar.gz
Summary:        Flexible and Fast web server
Group:          Productivity/Networking/Web/Servers
URL:            http://www.0x50.org

%description
Cherokee is a tiny, very fast, lightweight Web server. It is
implemented entirely in C, and has no dependencies beyond a standard C
library. It is embeddable and extensible with plug-ins. It supports
on-the-fly configuration by reading files or strings, TLS/SSL (via
GNUTLS or OpenSSL), virtual hosts, authentication, cache friendly
features, PHP4, custom error management, and much more.

%prep
%setup -q
gzip -dc %SOURCE | tar xvf -

%build
CFLAGS="$RPM_OPT_FLAGS"                 \
./configure --prefix=%{_prefix}         \
            --sysconfdir=%{_sysconfdir} \
            --mandir=%{_mandir}         \
            --sbindir=%{_sbindir}       \ 
		  --with-wwwroot=/home/httpd/ \
            --enable-pthreads
make CFLAGS="-O0 -g3"

%install
make install DESTDIR=$RPM_BUILD_ROOT
rm $RPM_BUILD_ROOT/etc/cherokee/sites-enabled/default

%clean
rm -rf $RPM_BUILD_ROOT

%post
/sbin/ldconfig
ln -s %{_sysconfdir}/cherokee/sites-available/default \
      %{_sysconfdir}/cherokee/sites-enabled/default
mkdir -p /home/httpd

%postun
/sbin/ldconfig

%files
%{_mandir}/*
%{_bindir}/*
%{_libdir}/*
%{_datadir}/*
%{_sbindir}/*
%{_includedir}/*
%{_sysconfdir}/*
/home/httpd/*

