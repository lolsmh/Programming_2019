#include <stdio.h>

int count_sum(int num, int sum){
    sum += num % 10;
    num /= 10;
    if(num == 0) {
        return sum;
    } else {
        return count_sum(num, sum);
    }
}

int number_to_array(int number, int k){
    int array[k];
    int i = k;
    int temp;
    while (number != 0 && i != 0) {
        i--;
        temp = number % 10;
        array[i] = temp;
        number /= 10;
    }
    for (i = 0; i < k; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

int main() {
    int number;
    scanf("%d", &number);
    int number_copy = number;
    int k = 0;
    while (number != 0) {
        k++;
        number /= 10;
    }
    number_to_array(number_copy, k);
    printf("\n");
    scanf("%d", &number);
    int res = count_sum(number, 0);
    printf("%d", res);
}