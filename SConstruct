from SCons.Environment import Environment
from SCons.Script import SConscript, AddOption, GetOption


AddOption(
    "--cppstd",
    dest="cppstd",
    type="string",
    default="11",
    help="C++ standard to use: 98, 03, 11, 14, 17, 20 (default is C++11)"
)

cppstd = GetOption('cppstd')
print(f"Using C++{cppstd} standard.")

ENVIRONMENT = Environment()

ENVIRONMENT.Append(
    CXXFLAGS = [f'-std=c++{cppstd}', '-Wpedantic', '-pedantic-errors'],
    CXXCOMSTR    = f"Compiling [$SOURCE]", 
    LINKCOMSTR   = "Linking   [$TARGET]",
    ARCOMSTR     = "Archiving [$TARGET]",
    RANLIBCOMSTR = "Ranlib    [$TARGET]"
)

Export('ENVIRONMENT')

variantDir = 'build'

SConscript('src/library/SConscript', variant_dir=variantDir + '/library', duplicate=0)

program = SConscript('src/program/SConscript', variant_dir=variantDir + '/program', duplicate=0)
tests = SConscript('tests/SConscript', variant_dir=variantDir + '/tests', duplicate=0)

ENVIRONMENT.AlwaysBuild(ENVIRONMENT.Alias('run', program, './${SOURCE}'))
ENVIRONMENT.AlwaysBuild(ENVIRONMENT.Alias('test', tests, './${SOURCE}'))
