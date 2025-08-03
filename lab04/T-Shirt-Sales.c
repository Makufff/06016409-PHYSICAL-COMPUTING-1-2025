#include <stdio.h>
 
int main() {
    double price;
    int percent, num;
    scanf("%lf %d %d", &price, &percent, &num);
 
    double first_promotion_price = price * (100.0 - percent) / 100.0 * num;
    double second_promotion_price = (num % 3) * price + (num / 3) * 2 * price;
 
    if (first_promotion_price <= second_promotion_price) {
        printf("Discount %d%%\n", percent);
        printf("%.2f\n", first_promotion_price);
    } else {
        printf("Buy 2 Get 1\n");
        printf("%.2f\n", second_promotion_price);
    }
 
    return 0;
}
