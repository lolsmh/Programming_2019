#include <stdio.h>
#include <mm_malloc.h>

int main() {
    float arr[4] = {-8.8f, 11.2f, 64.67f, 55.32f};
    arr[0] = -8.8;
    arr[1] = 11.2;
    arr[2] = 64.67;
    arr[3] = 55.32;
    float *pointer;
    pointer = arr;
    for (int i = 0; i < 2; i++) {
        printf("%.1f ", *(pointer + i));
    }
    for (int i = 2; i < 4; i++) {
        printf("%.2f ", *(pointer + i));
    }
    printf("\n");
    float *arr2;
    arr2 = (float*)malloc(4 * sizeof(float));
    arr2[0] = -8.8;
    arr2[1] = 11.2;
    arr2[2] = 64.67;
    arr2[3] = 55.32;
    for(int i = 0; i < 2; i++){
        printf("%.1f ", arr2[i]);
    }
    for(int i = 2; i < 4; i++){
        printf("%.2f ", arr2[i]);
    }
    free(arr2);
    return 0;
}