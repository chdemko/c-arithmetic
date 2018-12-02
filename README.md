c-test project
==============

[![Travis](https://img.shields.io/travis/chdemko/c-test.svg)](http://travis-ci.org/chdemko/c-test)
[![Codacy Badge](https://img.shields.io/codacy/grade/8cd40a98b85f4d4bbea18469cd062bb7.svg)](https://www.codacy.com/app/chdemko/c-test)
[![Coveralls](https://img.shields.io/coveralls/chdemko/c-test.svg)](https://coveralls.io/r/chdemko/c-test?branch=master)
[![Documentation Status](https://img.shields.io/readthedocs/c-test.svg)](http://c-test.readthedocs.io/en/latest/?badge=latest)

Installation
------------

Use `brew` and not `apt` if you are on macos!

~~~bash
$ sudo apt install cmake gcc lcov cppcheck python-pip valgrind flawfinder doxygen dot
$ git clone https://github.com/chdemko/c-test.git
$ [sudo] pip install [--user] -r c-test/docs/requirements.txt
~~~

Usage
-----

### Compilation

~~~bash
$ mkdir build
$ cd build
$ cmake ../c-test -DBUILD_COVERAGE=1 -DBUILD_HTML_COVERAGE=1 -DUSE_VALGRIND=1 -DRUN_CPPCHECK=1
$ make
~~~

### Run test and code coverage

~~~bash
$ make test
$ make coverage
$ make html-coverage
~~~

### Check style

~~~bash
$ make cclint
~~~

### Run flaw finder

~~~bash
$ make flawfinder
~~~

### Build the docs

~~~bash
$ make docs
~~~

### Create archives

~~~bash
$ make package
$ make package_source
~~~

### Install package

~~~bash
$ make install
~~~

