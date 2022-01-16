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

    int i2;
    for (i = 0; i < N - 1; ++i) {
        for (i2 = i + 1; i2 < N; ++i2) {
            if (a[i] == a[i2]) {
                printf("%i %i\n", i + 1, i2 + 1);
            }
        }
    }

    return 0;
}