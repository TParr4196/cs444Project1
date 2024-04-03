# Hello Thread



## Building
`make` to build. An executable called `hellothread` will be produced.
rm -f hellothread to clean up executable

## Files
'hellothread.c': Project 1 of cs444 designed to begin exploration of pthread library and functionality

## Data
makes use of an array in order to help keep track of which thread is which.
Counts to 4 with each thread in order to demonstrate parallelism of threads.

## Functions

'count()': counts to 4 while printing each count

'main()'
    'pthread_create()': creates a new thread
    'pthread_join()': waits for given thread to finish before continuing process

## Notes
exact order of counts output will vary with multiple threads.