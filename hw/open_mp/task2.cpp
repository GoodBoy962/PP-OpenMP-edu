//
// Created by Александр Плискин on 15.02.17.
//
#include "iostream"
#include "omp.h"

int main() {
    int val = 1;
#pragma omp parallel if(val!=1)
    {

    }
};

