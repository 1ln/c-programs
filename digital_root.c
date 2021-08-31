#include <stdio.h>
int main() {
    unsigned int n,e,r;

    printf("Enter a positive number");
    scanf("%u",&n);
    e = n;
    while(e != 0) {
        int d = e % 10;
        r += d;
        e /= 10;

        if(e == 0 && d > 9) {
            e = r;
            r = 0;
        }
    }

    printf("Digital root of %u is %u\n",n,r);
    return 0;

}
