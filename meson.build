project('shared lib', 'c',
    default_options : ['cpp_std=c++23'])

inc = include_directories('.')
libfib = library('libfib', 'libfib.c'
    include_directories: inc,
)
libfib_dep = declare_dependency(include_directories : inc,
  link_with : libfib)

e = executable('prog', 'test.c', link_with : lib)
test('name of test', e)
