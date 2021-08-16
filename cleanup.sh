#!/bin/bash

find . -name '*.dSYM' -or -name '*.command' | xargs rm -R -f