c-arithmetic project
====================

|cmake| |Coveralls| |Documentation Status|

Installation
------------

Use ``brew`` and not ``apt`` if you are on macos!

.. code:: bash

   $ sudo apt install cmake gcc lcov cppcheck python-pip valgrind flawfinder doxygen dot
   $ git clone https://github.com/chdemko/c-arithmetic.git
   $ [sudo] pip install [--user] -r c-arithmetic/docs/requirements.txt

Usage
-----

Compilation
~~~~~~~~~~~

.. code:: bash

   $ mkdir build
   $ cd build
   $ cmake ../c-arithmetic -DBUILD_COVERAGE=1 -DBUILD_HTML_COVERAGE=1 -DUSE_VALGRIND=1 -DRUN_CPPCHECK=1
   $ make

Run test and code coverage
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code:: bash

   $ make test
   $ make coverage
   $ make html-coverage

Check style
~~~~~~~~~~~

.. code:: bash

   $ make cclint

Run flaw finder
~~~~~~~~~~~~~~~

.. code:: bash

   $ make flawfinder

Build the docs
~~~~~~~~~~~~~~

.. code:: bash

   $ make docs

Create archives
~~~~~~~~~~~~~~~

.. code:: bash

   $ make package
   $ make package_source

Install package
~~~~~~~~~~~~~~~

.. code:: bash

   $ make install

.. |cmake| image:: https://github.com/chdemko/c-arithmetic/actions/workflows/cmake.yml/badge.svg
   :target: https://github.com/chdemko/c-arithmetic/actions
.. |Coveralls| image:: https://img.shields.io/coveralls/chdemko/c-arithmetic.svg
   :target: https://coveralls.io/r/chdemko/c-arithmetic?branch=main
.. |Documentation Status| image:: https://img.shields.io/readthedocs/c-arithmetic.svg
   :target: http://c-arithmetic.readthedocs.io/en/latest/?badge=latest
