#include <locale.h>
#include <stdio.h> 

int main()
{
    int a[10];
    int N, K, L;

    printf("N: ");
    scanf_s("%i", &N);

    printf("K: ");
    scanf_s("%i", &K);

    printf("L: ");
    scanf_s("%i", &L);

    int i;
    if (K <= 1 || K > L || K > N)
    {
        printf("Error");
    }
    else
    {
        for (i = 0; i < N; ++i) {
            printf("a[%i] : ", i + 1);
            scanf_s("%i", &a[i]);
        }

        int sum = 0;
        for (i = K - 1; i <= L - 1; ++i) sum += a[i];

        printf("%.2f\n: ", (float)sum / (float)(L - K + 1));
        return 0;
    }
}