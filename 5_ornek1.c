// Girilen iki sayıdan büyük olanı ekrana yazdırır

#include <stdio.h>

int main()
{
    int sayi1, sayi2;

    printf("Birinci sayiyi giriniz : ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz : ");
    scanf("%d", &sayi2);

    if(sayi1 > sayi2)
        printf("Buyuk olan sayi = %d \n", sayi1);
    else
        printf("Buyuk olan sayi = %d \n", sayi2);

    return 0;
}
