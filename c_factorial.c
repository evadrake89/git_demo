#include <stdio.h>

int recur_factorial(int n) {
    if (n == 1) return 1;
    return n * recur_factorial(n - 1);
}

int add_factorial(int n) {
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += recur_factorial(i);
    }
    return result;
    
}

int main() {
    int n = 5;
    int result = add_factorial(n);
    printf("The sum of factorials from 0 to %d is: %d\n", n, result);
    return 0;
}
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
