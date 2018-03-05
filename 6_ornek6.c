#include <stdio.h>

int main()
{
    int sayac=0, toplam=0;
    int ilkDeger=1;
    int sonDeger=10;

    printf("%d'dan %d'e kadar olan cift ",ilkDeger,sonDeger);
    printf("sayilarin toplamini hesaplayan program.\n");
    printf("Toplama islemi basladi.\n");

    for(sayac=ilkDeger; sayac<=sonDeger; sayac++)
    {
        if(sayac%2==0)
        {
            toplam=toplam+sayac;
        }
    }

    printf("Toplam = %d \n",toplam);

    return 0;
}
