#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int count=0;
bool is_prime(int n) {
	count++;
    if (n <= 1) {
        return false;
    }
	count++;
    for (int i = 2; i*i <= n; i++) {
    	count++;
    	count++;
    	count++;
        if (n % i == 0) {
            return false;
        }
    }
    count++;

    return true;
}

int reverse(int n) {
    int reversed = 0;
	count++;
    while (n > 0) {
    	count++;
        int digit = n % 10;
        count++;
        reversed = reversed * 10 + digit;
        count++;
        n /= 10;
        count++;
    }
    count++;

    return reversed;
}

int main() {
    int N;
    printf("Enter the limit N: ");
    count++;
    scanf("%d", &N);
    count++;

    printf("Prime numbers whose reverse is also prime:\n");
    count++;
	count++;
    for (int i = 2; i <= N; i++) {
    	count++;
    	count++;
    	count++;
        if (is_prime(i) && is_prime(reverse(i))) {
            printf("%d\n", i);
            count++;
        }
    }
    count++;
    
    printf("The Time complexity is %d\n",count);
    return 0;
}
