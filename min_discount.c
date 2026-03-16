#include <stdio.h>
#include <string.h>
#include <float.h>

struct Product {
    char name[50];
    double price;
    double discount_pct;
    double abs_discount;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Product products[n];
    double min_discount = DBL_MAX;

    for (int i = 0; i < n; i++) {
        // Format: name,price,discount
        scanf(" %[^,],%lf,%lf", products[i].name, &products[i].price, &products[i].discount_pct);
        products[i].abs_discount = (products[i].price * products[i].discount_pct) / 100.0;
        
        if (products[i].abs_discount < min_discount) {
            min_discount = products[i].abs_discount;
        }
    }

    for (int i = 0; i < n; i++) {
        if (products[i].abs_discount == min_discount) {
            printf("%s\n", products[i].name);
        }
    }
    return 0;
}
