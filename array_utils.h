//
// Created by Александр Плискин on 16.02.17.
//

#ifndef PPEDU_ARRAY_UTILS_H
#define PPEDU_ARRAY_UTILS_H

#include "iostream"

using namespace std;

#endif //PPEDU_ARRAY_UTILS_H

void print_array(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    printf("\n");
}

void print_matrix(int *arr[], const int rows, const int columns) {
    for (int i = 0; i < rows; i++) {
        print_array(arr[i], columns);
    }
    printf("\n");
}