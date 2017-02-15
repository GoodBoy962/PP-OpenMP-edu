//
// Created by Александр Плискин on 15.02.17.
//

#include "iostream"
#include "omp.h"

int main() {
    int thread_id, threads_num;
#pragma omp parallel num_threads(8) //can be changed to 16 because there 8 cores
    {
        thread_id = omp_get_thread_num();
        threads_num = omp_get_num_threads();
        printf("Thread id: %d from %d threads. Hello word!\n",
               thread_id, threads_num);
    }
}

