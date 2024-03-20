#include <stdio.h>

void print_num(int num) {
    if (num < 10) {
        printf("%d ", num);
        return;
    }
    print_num(num / 10);
    printf("%d ", num % 10);
}

int main() {
    int num;
    printf("Введите натуральное число: ");
    scanf("%d", &num);
    printf("Цифры числа в прямом порядке: ");
    print_num(num);
    printf("\n");
    
    return 0;
}
