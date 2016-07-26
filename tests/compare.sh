#set -x

# build
rm -rf build;
mkdir build;
cd build;
cmake ..;
make;

# run
./fadeToColor > fadeToColor.actual;
./setColor > setColor.actual;

# compare outputs
$(cmp fadeToColor.actual ../fadeToColor.expected);
$(cmp setColor.actual ../setColor.expected);

# go back
cd ..;