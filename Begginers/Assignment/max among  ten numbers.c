#include <stdio.h>
  int main() {
    int s[10];
    int i;
    int max;
    printf("Enter ten values:");

    for (i = 0; i < 10; i++) {
    scanf("%d", &s[i]);
    }
    
    max = s[0];
    for (i = 0; i < 10; i++) {
if (s[i] > max) {
max = s[i];
    }
    }
    printf(" %d", max);
    return 0;
}