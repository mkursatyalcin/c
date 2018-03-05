#include <stdio.h>

int main()
{
    int counter=1;

    do{
        printf("Counter Degeri Ekrana Yazdiriliyor...\n");
        printf("%d \n",counter);
    }while(++counter<10);

    return 0;
}
