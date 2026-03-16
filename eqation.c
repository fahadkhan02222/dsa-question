#include <stdio.h>

int main() {
    int a,b,c;
    int result;

    printf("Enter value of a b c: ");
    scanf("%d %d %d",&a,&b,&c);

    result = (a*a*a) + (a*a*b) + (2*a*a*b) + (2*a*b*b) + (a*b*b) + (b*b*b);

    printf("Result = %d",result);

    return 0;
}
