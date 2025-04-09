project('shared lib', 'c'
    default_options : ['cpp_std=c++23'])
)
lib = library('mylib', 'source.c')

e = executable('prog', 'test.c', link_with : lib)
test('name of test', e)