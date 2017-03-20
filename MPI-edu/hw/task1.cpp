//
// Created by Александр Плискин on 20.03.17.
//
#include <iostream>
#include "mpi.h"

using namespace std;

int main() {

    MPI_Init(NULL, NULL);

    int size, rank;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    printf("Hello world! [ processor %d out of %d ]\n", rank, size);

    MPI_Finalize();
}