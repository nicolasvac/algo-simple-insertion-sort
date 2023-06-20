//
// Created by Nicolas Vaccari on 20/06/23.
//

#include <printf.h>

#include "insertion_sort.h"

int main(int argc, char *argv[]) {

    int vec[] = {15, 14, 13, 12, 11};

    // Calculate the size of the vector
    int vec_size = sizeof(vec) / sizeof(int);

    printf("Printing unordered vector: ");

    print_vec(vec, vec_size);

    // Sort the vector with the insertion sort algorithm
    sort((int *) &vec, vec_size, true);

    printf("Printing the ordered vector: ");

    print_vec(vec, vec_size);

    return 0;
}
