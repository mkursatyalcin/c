#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    char islem;

    printf("Birinci sayiyi gir = ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi gir = ");
    scanf("%d", &sayi2);

    printf("islemi gir = ");
    scanf(" %c", &islem);   // %c'den önce bir boşluk bırakınız

    switch (islem) {
    case '+':
        printf("%d + %d = %d \n", sayi1, sayi2, sayi1 + sayi2);
        break;
    case '-':
        printf("%d - %d = %d \n", sayi1, sayi2, sayi1 - sayi2);
        break;
    case '*':
        printf("%d * %d = %d \n", sayi1, sayi2, sayi1 * sayi2);
        break;
    case '/':
        if(sayi2 == 0)
            printf("Sifira bolme \n");
        else
            printf("%d / %d = %d \n", sayi1, sayi2, sayi1 / sayi2);
        break;
    default:
        printf("Gecersiz bir islem girdiniz.\n");
        break;
    }

    return 0;
}
