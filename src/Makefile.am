## Process this file with automake to produce Makefile.in
#
# $Id: Makefile.am,v 1.2 1999/12/25 02:25:35 pfkeb Exp $
#
# Author: Paul_Kunz@slac.stanford.edu
#

# The following set,  else would follow GNU conventions
AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libgeometry.la

libgeometry_la_SOURCES = \
	Box.cxx  Cone.cxx  Conic.cxx  Cons.cxx  \
	CoordTransform.cxx  Cylinder.cxx \
	GeomObject.cxx \
	Helix.cxx Hexahedron.cxx Hype.cxx Hyperbolic.cxx \
	Intersection.cxx Plane.cxx Point.cxx Ray.cxx RootFinder.cxx \
	Shape.cxx Sphe.cxx Sphere.cxx Surface.cxx \
	Track.cxx Trap.cxx Trd1.cxx Trd2.cxx Tube.cxx Tubs.cxx \
	Vector.cxx Volume.cxx Wedge.cxx

libgeometry_la_LDFLAGS = -version-info 1

INCLUDES = -I$(top_srcdir) \
	-I$(glast_prefix)/include
