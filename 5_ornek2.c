// Girilen iki sayıdan büyük olanı ekrana yazdırır

#include <stdio.h>

int main()
{
    int sayi;

    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);

    if(sayi <= 0){
        printf("%d, 0'dan kucuk veya esittir.\n",sayi);
    }
    else if(sayi>0 && sayi<=10){
        printf("%d, (0,10] araligindadir.\n", sayi);
    }
    else if(sayi>10 && sayi<=50){
        printf("%d, (10,50] araligindadir.\n", sayi);
    }
    else
        printf("%d, 50'den buyuk bir sayidir.\n",sayi);

    return 0;
}
