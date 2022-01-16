#include <locale.h>
#include <stdio.h> 

int main()
{
    char* locale = setlocale(LC_ALL, "");

    int A[10];
    int N;

    printf("N: ");
    scanf_s("%i", &N);

    int i;
    for (i = 0; i < N; ++i) {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    int min = A[1];

    for (i = 1; i < N; i += 2) {
        if (A[i] < min) min = A[i];
    }

    printf("%i\n", min);
    return 0;
}