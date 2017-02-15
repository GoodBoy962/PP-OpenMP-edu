//
// Created by Александр Плискин on 12.02.17.
//

#ifndef C_EDU_SORT_H
#define C_EDU_SORT_H

#endif //C_EDU_SORT_H

void insertion_sort(int arr[], int SIZE = 10) {
    for (int i = 1; i < SIZE; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j > -1 and arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int p, int q, int r) {
    int size = r - p + 1;
    int *temp = new int[size];
    int index = 0;
    int i = p, j = q + 1;
    while (i <= q && j <= r) {
        if (arr[i] > arr[j]) {
            temp[index] = arr[j];
            j++;
        } else {
            temp[index] = arr[i];
            i++;
        }
        index++;
    }
    while (i <= q) {
        temp[index] = arr[i];
        i++;
        index++;
    }
    while (j <= r) {
        temp[index] = arr[j];
        j++;
        index++;
    }
    for (index = 0; index < r - p + 1; index++) {
        arr[index + p] = temp[index];
    }
}

void merge_sort(int arr[], int p = 0, int r = 10) {
    if (r > p) {
        int q = (r + p) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

