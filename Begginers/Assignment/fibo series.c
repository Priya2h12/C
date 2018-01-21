#include <stdio.h>
int main(void) {
int i, n, s1 = 0, s2 = 1, n1;
scanf("%d", &n);
for (i = 1; i <= n; ++i)
    {
        printf("%d ", s1);
        n1 = s1 + s2;
        s1 = s2;
        s2 = n1;
    }
return 0;
}