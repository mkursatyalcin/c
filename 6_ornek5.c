#include <stdio.h>
#include <stdbool.h>

int main()
{
    int sayac=1;
    bool kontrol=true;

    printf("Dongu basladi.\n");

    while(kontrol)
    {
        printf("%d.iterasyon \n",sayac);
        sayac++;
        if(sayac>10)
        {
            kontrol=false;
        }
    }

    printf("Dongu tamamlandi.\n");

    return 0;
}
