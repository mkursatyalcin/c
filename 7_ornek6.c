#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int test(int);

int main(void)
{
    int x;
    srand(time(0));
    printf("Bir sayi giriniz: ");
    scanf("%d",&x);
    printf("%d \n", test(x));

    return 0;
}

int test(int x){
    int a=rand()%x;
    return a;
}
