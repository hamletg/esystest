## ****************************************************************************
##
## __legal_b__
## 
## Copyright (c) 2016 Michel Gillet  
## Distributed under the wxWindows Library Licence, Version 3.1. 
## (See accompanying file LICENSE_3_1.txt or 
## copy at http://www.wxwidgets.org/about/licence)
## 
## __legal_e__
##
## ****************************************************************************
##
##  Makefile.am
##  Process this file with automake to produce a Makefile.in file.
##
##  Original Author: Michel Gillet, 2016-07-26
##
## ****************************************************************************
##
##  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
##  changes you are making here.
##
##      Name, Affiliation, Date:
##  Description of Modification:
##
## ****************************************************************************


include $(top_srcdir)/config/Make-rules

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = \
    src \
    .

INST_FILES = \
    readme.txt \
    doc



install-data-local:
    @$(NORMAL_INSTALL) \
    for file in $(INST_FILES); do \
      d=$(srcdir); \
      if test -d $$d/$$file; then \
        test -d $(prefix)/$$file \
        || cp -pr $$d/$$file $(prefix) || :; \
      else \
        test -f $(prefix)/$$file \
        || cp -p $$d/$$file $(prefix)/$$file || :; \
      fi; \
    done

uninstall-local:
    @$(NORMAL_UNINSTALL) \
    w=`pwd`; cd $(srcdir); s=`pwd`; cd $$w; \
    if test $(prefix) != $$s; then \
      for file in $(INST_FILES); do \
        d=$(srcdir); \
        if test -d $$d/$$file; then \
          rm -rf $(prefix)/$$file; \
        else \
          rm -f $(prefix)/$$file; \
        fi; \
      done; \
    fi

