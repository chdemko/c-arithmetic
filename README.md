c-test
======

[![Travis](https://img.shields.io/travis/chdemko/c-test.svg)](http://travis-ci.org/chdemko/c-test)
[![Codacy Badge](https://img.shields.io/codacy/grade/8cd40a98b85f4d4bbea18469cd062bb7.svg)](https://www.codacy.com/app/chdemko/c-test)
[![Coveralls](https://img.shields.io/coveralls/chdemko/c-test.svg)](https://coveralls.io/r/chdemko/c-test?branch=master)
[![Documentation Status](https://readthedocs.org/projects/c-test/badge/?version=latest)](http://c-test.readthedocs.io/en/latest/?badge=latest)

Installation
------------

~~~bash
$ sudo apt install cmake gcc lcov cppcheck pip valgrind
$ sudo pip install -r docs/requirements.txt
$ git clone https://github.com/chdemko/c-test.git
$ cd c-test
~~~

Usage
-----

### Compilation

~~~bash
$ mkdir build
$ cd build
$ cmake .. -DBUILD_COVERAGE=1 -DBUILD_HTML_COVERAGE=1 -DTEST_VALGRIND=1
$ make
~~~

### Run test and code coverage

~~~bash
$ make test
$ make coverage
$ make html-coverage
~~~

### Build the docs

~~~bash
$ make docs
~~~

