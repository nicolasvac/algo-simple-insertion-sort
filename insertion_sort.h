//
// Created by Nicolas Vaccari on 20/06/23.
//

#ifndef ALGO_SIMPLE_INSERTION_SORT_INSERTION_SORT_H
#define ALGO_SIMPLE_INSERTION_SORT_INSERTION_SORT_H

#include <stdbool.h>

/**
 * Executes the insertion sort algorithm
 * @param vec The vector to sort
 * @param vec_size The size of the vector to sort
 * @param with_debug Prints additional information to stdout
 */
void sort(int *vec, int vec_size, bool with_debug);

/**
 * Prints a vector of integers to stdout
 * @param vec The vector to print
 * @param vec_size The size of the vector to print
 */
void print_vec(int *vec, int vec_size);

#endif //ALGO_SIMPLE_INSERTION_SORT_INSERTION_SORT_H
