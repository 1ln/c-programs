#include <stdio.h>
int main() {
    int n;
    int n0=0,n1=1;
    int a = n0+n1;

    printf("Number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci sequence: %d, %d, ",n0,n1);

    for(int i = 0; i <= n; ++i) {
        printf("%d, ",a);
        n0 = n1;
        n1 = a;
        a = n0 + n1;
    }

    return 0;

}
