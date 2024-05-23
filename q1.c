#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number     Square      Cube\n");
    if(number<0){
     for (int i = 0; i <=4 ; i++) {
    printf("%d          %d           %d\n", number,  number * number, number * number * number);
     number++;
     }
    }
     else  {
         for (int i = 0; i <=4 ; i++) {
    printf("%d          %d           %d\n", number,  number * number, number * number * number);
     number++;
     }
     }

    return 0;
}