// This is really out of boredom...
#include <stdio.h>
#include <stdlib.h>

#ifndef MAX_CAPACITY
#define MAX_CAPACITY 3
#endif

unsigned int current_capacity = 0;
unsigned int max_capacity = MAX_CAPACITY;

void push(int** arr, int n);
void insert(int** arr, int idx, int n);
int get(int** arr, int n);
int index_of(int** arr, int n);

int main(void) {

    // int array = new int[max_capacity]
    int* array = (int *)malloc(max_capacity * sizeof(int));

    if (array == NULL) return 1;

    push(&array, 10);
    push(&array, 12);
    push(&array, 3);
    push(&array, 4);
    push(&array, 18);
    push(&array, 4);
    push(&array, 18);


    insert(&array, 6, 235);
    printf("%d", get(&array, 6));
    // insert(&array, 9, 10);

    for (int i = 0; i < current_capacity; i++) {
        printf("%d\n", array[i]);
    }

    free(array);
    return 0;
}


void push(int** arr, const int n) {
    // we've reached capacity
    if (current_capacity >= max_capacity) {
        max_capacity *= 2;

        int* new_array = (int* ) realloc(*arr, max_capacity * sizeof(int));

        *arr = new_array;
    } 

    (* arr)[current_capacity++] = n;

}

void insert(int** arr, const int idx, const int n) {
    if (idx >= current_capacity) {
        printf("Index %d out of for array of length %d", idx, current_capacity);
    } else (* arr)[idx] = n;
}

int index_of(int** arr, const int n) {
    for (size_t i = 0; i < current_capacity; i++) {
        if ((* arr)[i] == n) return i;
    }

    return -1;
}

int get(int** arr, const int n) {
    return n < 0 || n >= current_capacity ? -1 : (* arr)[n];
}

void clear_all(int** arr) {
    free(arr);
    arr = NULL;
}

int pop(int** arr) {
    return (* arr)[(unsigned int)--current_capacity];
}

