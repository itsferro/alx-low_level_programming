#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t calculate_index(size_t index_l, size_t index_h, int l, int h, int value);
int interpolation_search(int *array, size_t size, int value);
size_t binary_search_2(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* the end of iSEARCH_ALGOS_H*/
