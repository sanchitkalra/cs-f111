[ -d "build" ] && echo "Build dir found" || mkdir build
echo 'Compiling'
gcc -o build/$1 $1.c
echo 'Running'
build/./$1