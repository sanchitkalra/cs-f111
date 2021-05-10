SECONDS=0
[ -d "build" ] && echo "Build dir found" || mkdir build
echo 'Compiling'
gcc -o build/$1 $1.c
echo 'Running'
build/./$1
duration=$SECONDS
echo "\n$duration seconds elapsed."