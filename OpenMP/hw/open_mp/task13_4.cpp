//
// Created by Александр Плискин on 27.02.17.
//
#import "iostream"
#import "omp.h"

void log(int thread_id, int threads_num) {
    printf("Thread id: %d from %d threads. Hello world!\n",
           thread_id + 1, threads_num);
}

int main() {
}
