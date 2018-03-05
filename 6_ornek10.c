#include <stdio.h>

int main()
{
    int sayac;

    for(sayac=0; sayac<10; sayac++)
    {
        if(sayac==5)
        {
            continue;
        }
        printf("%d \n", sayac);
    }

    return 0;
}
