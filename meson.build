project('my project', 'cpp',
    default_options : ['cpp_std=c++2a'])

inc = include_directories('include/')

libfib = library('libfib',
    'src/libfib.cpp',
    include_directories: inc
)

libfib_dep = declare_dependency(include_directories : inc,
  link_with : libfib)

e = executable('prog', 'test/test.cpp', dependencies : [libfib_dep])

test('name of test', e)
