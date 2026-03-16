#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n == 0) {
        printf("No Factors\n");
        return 0;
    }

    n = abs(n);
    int first = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first) printf(",");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
