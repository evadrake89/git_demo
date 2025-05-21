#include <stdio.h>

// calculate the factorial of the number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
// calculate the sum of factorial for n numbers
long long sum_of_factorials(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter num: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("enter number more than 1");
        return 1;}

    long long result = sum_of_factorials(n);
    printf("Sum : ", n, result);

    return 0;
}
