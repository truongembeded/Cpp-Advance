#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return n;
}

int main() {
    int a[100], n, i, sum = 0, count = 0;
    float avg;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Cac so nguyen to trong mang: ");
    for (i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
            sum += a[i];
            count++;
        }
    }
    printf("\n");

    avg = (float) sum / count;

    printf("Trung binh cong cac so nguyen to: %.2f\n", avg);

    return 0;
}