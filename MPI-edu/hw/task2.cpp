//
// Created by Александр Плискин on 20.03.17.
//
#include "mpi.h"
#include <iostream>

using namespace std;

int main() {

    MPI_Init(NULL, NULL);
    int size, rank;
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

}
