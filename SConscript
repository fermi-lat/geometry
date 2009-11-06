# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geometry/SConscript,v 1.4 2009/08/07 00:46:27 jrb Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geometry-03-02-01
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('geometryLib', depsOnly = 1)
geometryLib = libEnv.StaticLibrary('geometry',
                                   ['src/Box.cxx', 'src/Cone.cxx', 'src/Conic.cxx',
                                    'src/CoordTransform.cxx', 'src/Cylinder.cxx',
                                    'src/GeomObject.cxx', 'src/Helix.cxx',
                                    'src/Hexahedron.cxx', 'src/Hype.cxx',
                                    'src/Hyperbolic.cxx', 'src/Intersection.cxx',
                                    'src/Plane.cxx','src/Point.cxx', 'src/Ray.cxx',
                                    'src/Shape.cxx', 'src/Sphe.cxx',
                                    'src/Sphere.cxx', 'src/Surface.cxx',
                                    'src/Track.cxx', 'src/Tube.cxx','src/Tubs.cxx',
                                    'src/Vector.cxx', 'src/Volume.cxx',
                                    'src/Wedge.cxx'])

baseEnv.Tool('registerTargets', package = 'geometry',
             staticLibraryCxts = [[geometryLib, libEnv]],
             includes = listFiles(['geometry/*.h']))




