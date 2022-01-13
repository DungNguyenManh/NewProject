#include <stdio.h>

int Nhap_So(int n);
void Phan_Tich_Thua_So(int n);

int main()
{
    int n = Nhap_So(n);
    Phan_Tich_Thua_So(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so: ");
    scanf("%d", &n);
    if (n >= 2)
    {
        return n;
    }
    else
    {
        printf("Nhap n > 2\n");
        Nhap_So(n);
    }
}

void Phan_Tich_Thua_So(int n)
{
    int i = 2, count = 0;
    printf("%d = ", n);
    while (n > 1)
    {
        if (n % i == 0)
        {
            count++;
            if (n == i)
            {
                printf("%d^%d ", i, count);
                if (n != i)
                {
                    printf(" * ");
                }
            }
            n /= i;
        }
        else
        {
            if (count > 0)
            {
                printf("%d^%d * ", i, count);
                count = 0;
            }
            i++;
        }
    }
}