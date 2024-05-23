#include <stdio.h>

int main() {
    float price, discounted_price;

    printf("Enter price of item");
    scanf("%f", &price);

   
    discounted_price = price * 0.85;

    printf("price after discount is  %.2f\n", discounted_price);

    return 0;
}
