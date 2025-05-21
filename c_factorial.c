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