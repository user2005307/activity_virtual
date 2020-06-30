# activity_virtual
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)//comparision
            printf("%d is a prime number.", n);//printing the number is prime 
        else
            printf("%d is not a prime number.", n);//printing the number is not prime
    }

    return 0;
}
