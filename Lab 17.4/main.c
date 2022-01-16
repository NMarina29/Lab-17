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


    if (a[N - 1] > a[N - 2]) {
        printf("%i \n", N);
    }
    else {
        i = N - 2;
        while ((i >= 1) && !((a[i - 1] < a[i]) && (a[i] > a[i + 1]))) {
            --i;
        }
        printf("%i \n", i + 1);
    }
    return 0;
}