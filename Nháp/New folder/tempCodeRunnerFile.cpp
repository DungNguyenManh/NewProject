#include <stdio.h>

int main()
{
    int n, T = 1;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    printf("Cac uoc so le cua %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            T *= i;
            printf("%d ", i);
        }
    }
    printf("Tich cac uoc so le cua %d la: %d", n, T);

    return 0;
}