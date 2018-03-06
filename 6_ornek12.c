#include <stdio.h>

int main()
{
    int sayi,toplam=0,i=1;
    char kontrol;

    while(1)
    {
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&sayi);
        toplam+=sayi;

        printf("Yeni sayi girmek istiyor musun? (E/H) : ");
        scanf(" %c",&kontrol);

        if(kontrol=='H')
        {
            break;
        }
        i++;
    }

    printf("%d sayi girdiniz.\n",i);
    printf("Girilen sayilarin toplami = %d \n",toplam);

    return 0;
}
