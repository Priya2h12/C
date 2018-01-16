#include <stdio.h>
int main(void) {
int i, n, a1 = 0, a2 = 1, n1;
scanf("%d", &n);
for (i = 1; i <= n; ++i)
    {
        printf("%d ", a1);
        n1 = a1 + a2;
        a1 = a2;
        a2 = n1;
    }
return 0;
}