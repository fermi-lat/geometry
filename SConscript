# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/geometry/SConscript,v 1.6 2010/06/11 00:45:23 jrb Exp $
# Authors: T.Burnett <tburnett@u.washington.edu>
# Version: geometry-03-02-02
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

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




