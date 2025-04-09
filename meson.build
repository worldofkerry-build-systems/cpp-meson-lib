project('shared lib', 'c')
lib = library('mylib', 'source.c')

e = executable('prog', 'test.c', link_with : lib)
test('name of test', e)