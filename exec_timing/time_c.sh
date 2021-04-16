SECONDS=0
gcc -o armstrong_series armstrong_series.c
./armstrong_series
duration=$SECONDS
echo "\n$duration seconds elapsed."