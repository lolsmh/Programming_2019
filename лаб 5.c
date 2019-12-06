#include <stdio.h>

int main() {
    int arr[] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int b[2][2] = {1, 2, 3, 1}, c[2][2] = {1, 1, 0, 2}, sum[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sum[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                sum[i][j] += sum[i][k] * sum[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
    }
    return 0;
}