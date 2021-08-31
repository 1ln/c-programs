#include <stdio.h>
int main() {
    int n,i;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n == 2) {
    printf("Prime number.\n");
    } else {
        for(i = 2; i <= n - 1; ++i) {
            if(n % i == 0) { break; }
        }
        if(i != n) {
        printf("Number is not a prime.\n");
        } else {
        printf("Number is prime.\n");
        }
    }

    return 0;

}
