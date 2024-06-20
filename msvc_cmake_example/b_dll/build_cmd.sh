cmake -S ../ -G Ninja -DCMAKE_INSTALL_PREFIX=./build_lib
cmake --build . --config release
cmake --install . --config release