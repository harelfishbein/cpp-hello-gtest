project('proj1', 'cpp', version : '0.1')

gtest = dependency('gtest')

tests_src = [
  'src/hello.cpp',
  'src/HelloTest.cpp'
]

e = executable(
  'proj1',
  sources : tests_src,
  dependencies : gtest
)

test('HelloTest', e)

