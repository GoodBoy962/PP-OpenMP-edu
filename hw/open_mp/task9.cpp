//
// Created by Александр Плискин on 16.02.17.
//

#include "iostream"
#include "omp.h"
#include "../../array_utils.h"

const int N = 10000;
const int M = 20000;

int main() {
    int **matrix = new int *[N];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[M];
        for (int j = 0; j < M; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

//    printf("Matrix:\n");
//    print_matrix(matrix, N, M);

    int *vector = new int[M];
    for (int i = 0; i < M; i++) {
        vector[i] = rand() % 10;
    }

//    printf("Vector:\n");
//    print_array(vector, M);
//    printf("\n");

    int *result = new int[N];
    for (int i = 0; i < N; i++) {
        result[i] = 0;
    }

    double start_time = omp_get_wtime();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    printf("[Simple] Time to count: %2.15f\n", omp_get_wtime() - start_time);
//    printf("Result vector:\n");
//    print_array(result, M);

    start_time = omp_get_wtime();
#pragma omp parallel for schedule(dynamic, 100) num_threads(8)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    printf("[Parallel] Time to count: %2.15f\n", omp_get_wtime() - start_time);

    for (int i = 0; i < N; ++i)
        delete[] matrix[i];
    delete[] matrix, vector, result;
}
