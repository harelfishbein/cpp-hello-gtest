#!/bin/bash

set -e
set -x

conan install . --output-folder=build

cd build

source conanbuild.sh

meson setup --native-file conan_meson_native.ini .. meson

meson compile -C meson

meson test -C meson

cat meson/meson-logs/testlog.txt

source deactivate_conanbuild.sh