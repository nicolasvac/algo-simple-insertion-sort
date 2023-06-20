//
// Created by Nicolas Vaccari on 20/06/23.
//
#include <stdio.h>

#include "insertion_sort.h"

void sort(int *vec, int vec_size, bool with_debug) {
    int temp;
    // Number of comparisons executed
    int total_comparisons = 0;
    // Number of swap executed
    int total_swaps = 0;

    if (with_debug) {
        printf("IS: Ordering a vector with size of %d\n", vec_size);
    }

    // The first (i = 0) element does not need to be checked
    for (int i = 1; i < vec_size; ++i) {

        if (with_debug) {
            printf("IS: Executing cycle with index %d\n", i);
        }

        for (int j = i; j > 0; j--) {
            if (with_debug) {
                printf("IS: Executing sub_cycle with indexes %d,%d,%d\n", i, j, j - 1);
                printf("IS: Comparing element %d < %d\n", vec[j], vec[j - 1]);
            }

            if (vec[j] < vec[j - 1]) {
                if (with_debug) {
                    printf("IS: Swapping element %d with element %d\n", vec[j - 1], vec[j]);
                }

                temp = vec[j - 1];
                vec[j - 1] = vec[j];
                vec[j] = temp;

                total_swaps++;
            }

            total_comparisons++;
        }

        if (with_debug) {
            printf("IS: Printing current vector ");
            print_vec(vec, vec_size);
            printf("IS: -------------\n");
        }
    }

    if (with_debug) {
        printf("IS: Total comparisons executed: %d\n", total_comparisons);
        printf("IS: Total swaps executed: %d\n", total_swaps);
    }
}

void print_vec(int *vec, int vec_size) {
    printf("\n");

    for (int i = 0; i < vec_size; i++) {
        // Print the number
        printf("%d ", vec[i]);

        // Go to a new line every 10 characters
        if (i % 10 == 0 && i != 0) {
            printf("\n");
        }
    }

    printf("\n");
}
