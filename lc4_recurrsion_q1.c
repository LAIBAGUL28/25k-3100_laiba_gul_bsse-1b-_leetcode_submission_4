#include <stdio.h>

// Recursive function 
int climbStairs(int n) {
    if (n == 1) return 1;   
    if (n == 2) return 2;   // base conditions
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    int ways = climbStairs(n);
    printf("Number of ways: %d\n", ways);

    return 0;
}

