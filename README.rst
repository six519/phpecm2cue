phpecm2cue
==========

PHP C Extension To Decode ECM File And Generate Cue File. Code tested in OSX 10.11.6.

Building
=========
::

    phpize
    ./configure --enable-phpecm2cue
    make

Installing
==========

add entry to php.ini file `extension=/<PATH TO FILE>/phpecm2cue.so`

Sample Usage
============
::

    phpecm2cue_process("Tekken 3 (E) (Track 1) [SCES-01237].bin.ecm");