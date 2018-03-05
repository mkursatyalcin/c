#include <stdio.h>

int main()
{
    int sayac;

    for(sayac=0; sayac<1000; sayac++)
    {
        if(sayac==5)
        {
            break;
        }
        printf("%d \n", sayac);
    }

    printf("Dongu sayac = %d degerinde sonlandirildi.\n",sayac);

    return 0;
}
