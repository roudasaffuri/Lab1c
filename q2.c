#include <stdio.h>

int main() {
    int a,b,c;
    printf(" y = a * 2 + b^2 + c\n");
    printf("Enter a number to a: \n");
    scanf("%d", &a);
    printf("Enter a number to b: \n");
    scanf("%d", &b);
    printf("Enter a number to c: \n");
    scanf("%d", &c);

    printf("y = %d",2*a+b*b+c);
    

    return 0;
}