#include <stdio.h>

int topla(int,int);

int main()
{
    int a=3,b=4;
    int toplam=0;

    toplam = topla(a,b);
    printf("%d \n", toplam);

    a=6;b=8;
    printf("%d \n", topla(a,b));

    return 0;
}

int topla(int x, int y){
    return x+y;
}
