#include <stdlib.h>
#include <stdio.h>

int main () {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("%10d %10d %10d\n%10d %10d %10d\n%-10d %-10d %-10d\n%-10d %-10d %-10d\n", a, b, c, d, e, f, a, b, c, d, e, f);
}