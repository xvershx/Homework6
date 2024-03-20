#include <stdio.h>

void print_range(int A, int B) {
    if (A == B) {
        printf("%d ", A);
        return;
    }
    if (A < B) {
        printf("%d ", A);
        print_range(A + 1, B);
    }
    else {
        printf("%d ", A);
        print_range(A - 1, B);
    }
}

int main() {
    int A, B;
    printf("Введите два целых числа через пробел ");
    scanf("%d %d", &A, &B);
    printf("ЧПоследовательность целых чисел: ");
    print_range(A, B);
    printf("\n");
    return 0;
}
