#include <stdio.h>

int Nhap_So(int n);
void Uoc_So(int n);

int main()
{
    int n = Nhap_So(n);
    Uoc_So(n);

    return 0;
}

int Nhap_So(int n)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    return n;
}

void Uoc_So(int n)
{
    int sum = 0;
    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
        {
            printf("%2d ", i);
            sum+=i;
        }
    }
    printf("\nTong cac uoc so chan cua %d la: %d",n,sum);

}