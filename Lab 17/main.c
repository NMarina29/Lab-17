#include <locale.h>
#include <stdio.h> 

int main()
{
    char* locale = setlocale(LC_ALL, "");

    int a[10];
    int N;

    printf("N: ");
    scanf_s("%i", &N);

    int i;
    for (i = 0; i < N; ++i) {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &a[i]);
    }

    int r = a[1] - a[0];
    for (i = 1; i < N; ++i) {
        if (r != a[i] - a[i - 1]) {
            r = 0;
        }
    }

    printf("%i\n: ", r);
    return 0;
}