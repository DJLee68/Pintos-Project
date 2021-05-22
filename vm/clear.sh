make clean
make
cd build
../../utils/pintos-mkdisk filesys.dsk --filesys-size=2
../../utils/pintos -f -q 
cd ../../examples
make clean
make
cd ../vm/build
../../utils/pintos -p ../../examples/echo -a echo -- -q
