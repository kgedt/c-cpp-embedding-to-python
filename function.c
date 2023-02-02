#include <stdio.h>
#include <string.h>
#include <malloc.h>

// test function for embedding
int* string_array_to_int(char *str) {
    int N = strlen(str)/2 + 1;
    int *arr = (int *)malloc(N*sizeof(int));
    for (size_t i = 0; i < N; ++i)
        arr[i] = str[i*2]-48;
    
    return arr;
}