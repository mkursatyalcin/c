#include <stdio.h>

int maksimum(int,int,int);

int main()
{
    int sayi1,sayi2,sayi3,max;

    printf("Sirayla 3 sayi giriniz : \n");
    scanf("%d %d %d", &sayi1, &sayi2, &sayi3);

    max = maksimum(sayi1,sayi2,sayi3);
    printf("Girdiginiz sayilardan en buyugu = %d \n",max);

    return 0;
}

int maksimum(int x, int y, int z){
    int enbuyuk = x;

    if(y>enbuyuk)
        enbuyuk = y;
    if(z>enbuyuk)
        enbuyuk = z;

    return enbuyuk;
}
