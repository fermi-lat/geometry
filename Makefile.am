## Process this file with automake to produce Makefile.in
#
# $Id: Makefile.am,v 1.2 2000/01/17 20:18:11 pfkeb Exp $
#
# Author: Paul_Kunz@slac.stanford.edu
#

# The following set,  else would follow GNU conventions
AUTOMAKE_OPTIONS = foreign

EXTRA_DIST = config

SUBDIRS = geometry src

lib_LTLIBRARIES = libgeometry.la

libgeometry_la_SOURCES = version.cxx

libgeometry_la_LIBADD = src/libgeometry.la

libgeometry_la_LDFLAGS = -version-info 1
