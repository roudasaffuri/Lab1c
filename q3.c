#include <stdio.h>

int main() {
    double a,b,area;
    printf("Enter a triangle edge and its height respectively , please :  \n");
    printf("Enter edge : \n");
    scanf("%lf", &a);
    printf("Enter height : \n");
    scanf("%lf", &b);
    area = (a*b)/2;
    printf("The triangle area is =  %.2f\n",area);
    return 0;
}