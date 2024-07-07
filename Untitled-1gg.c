#include <stdio.h>

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the maximum balance
int max_balance(int x, int n) {
    int max_gcd = 1;
    
    // Calculate the GCD of 1 to n
    for (int i = 2; i <= n; i++) {
        max_gcd = (max_gcd > i) ? max_gcd : gcd(max_gcd, i);
    }
    
    // Calculate the maximum balance
    int max_balance = x / max_gcd;
    
    return max_balance;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, n;
        scanf("%d %d", &x, &n);

        // Find and print the maximum balance for each test case
        printf("%d\n", max_balance(x, n));
    }

    return 0;
}
