#include <stdio.h>

int main()
{
    int i,sayi,toplam=0;

    for(i=1; i<=5; i++)
    {
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&sayi);
        toplam+=sayi;
    }

    printf("Girilen sayilarin toplami = %d \n",toplam);

    return 0;
}
