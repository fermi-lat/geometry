# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/geometry/geometryLib.py,v 1.1 2008/07/09 21:13:46 glastrm Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['geometry'])
    env.Tool('addLibrary', library = env['clhepLibs'])
def exists(env):
    return 1;
