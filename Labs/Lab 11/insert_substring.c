#include <stdio.h>
#include <string.h>

int main() {

    char a[10];
    char b[10];
    char c[10];

    int p = 0, r = 0, i = 0, t = 0;
    int x, g, s, n, o;

    printf("Enter first string: \n");
    gets(a);

    printf("Enter second string: \n");
    gets(b);

    printf("Enter the position where the item has to be inserted: \n");
    scanf("%d", &p);

    r = strlen(a);
    n = strlen(b);

    // copying the input string into another array
    while (i <= r) {
        c[i] = a[i];
        i++;
    }

    s = n+r;
    o = p+n;

    // adding the substring
    for (i = p; i < s; i++) {
        x = c[i];
        if (t < n) {
            a[i] = b[t];
            t++;
        }
        a[o] = x;
        o++;
    }

    printf("%s", a);

    return 0;
}