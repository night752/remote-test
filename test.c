#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b) {
    printf("Sum: %d\n", a + b);
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    printf("Hello, World!\n");
    return 0;
}
