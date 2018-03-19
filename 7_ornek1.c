#include <stdio.h>

int kare(int); //Fonksiyon prototipi

int main()
{
    printf("%d \n", kare(5));
    return 0;
}

int kare(int x){
    return x * x;
}
