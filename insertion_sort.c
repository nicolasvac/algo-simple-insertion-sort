//
// Created by Nicolas Vaccari on 20/06/23.
//
#include <stdio.h>

#include "insertion_sort.h"

void sort(int *vec, int vec_size, bool with_debug) {
    // Number of swap executed
    int total_swaps = 0;

    if (with_debug) {
        printf("IS: Ordering a vector with size of %d\n", vec_size);
        printf("IS: -------------\n");
    }

    // The first (j = 0) element does not need to be checked
    for (int j = 1; j < vec_size; j++) {
        int element_j = vec[j];
        int i = j - 1;

        if (with_debug) {
            printf("IS: j = %d | i = %d | element_j = %d\n", j, i, element_j);
        }

        while (i >= 0 && vec[i] > element_j) {
            if (with_debug) {
                printf(
                        "IS: Found vec[%d] = %d > element_j = %d -> swapping vec[%d] = %d to vec[%d] = %d\n",
                        i,
                        vec[i],
                        element_j,
                        i + 1,
                        vec[i + 1],
                        i,
                        vec[i]
                );
            }

            vec[i + 1] = vec[i];
            i--;

            total_swaps++;
            printf("IS: new i = %d\n", i);
        }

        if (with_debug) {
            printf("IS: Placing in vec[%d] element_j = %d\n", i + 1, element_j);
        }

        vec[i + 1] = element_j;

        if (with_debug) {
            printf("IS: Printing current vector: ");
            print_vec(vec, vec_size);
            printf("IS: -------------\n");
        }
    }

    if (with_debug) {
        printf("IS: Total swaps executed: %d\n", total_swaps);
    }
}

void print_vec(int *vec, int vec_size) {
    for (int i = 0; i < vec_size; i++) {
        // Print the number
        printf("%d ", vec[i]);

        // Go to a new line every 50 characters
        if (i % 50 == 0 && i != 0) {
            printf("\n");
        }
    }

    printf("\n");
}
