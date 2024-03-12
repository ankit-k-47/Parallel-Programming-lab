# Parallel_Programming_LAB

## OPEN MP
- To compile
```
gcc -fopenmp -o test test.c   
```
- To run the executable  
```
time ./test
```

## MPI 
- To compile
```
mpicc test.c -o test
```
- To run the executable  
```
mpirun -n 2 test
```
