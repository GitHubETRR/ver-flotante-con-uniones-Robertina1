#include <stdio.h>

union pasajes{
    float num;
    unsigned char vect[4];
};

int main(void){
    union pasajes numero;
    printf("Debes ingresar un numero al azar \n");
    scanf("%f", &numero.num);
    printf("Tu numero ingresado va a ser ");
    for ( int i = 3; i >= 0; i--){
        printf("%x",numero.vect[i]);
    }
    printf(" en hexadecimal \n");
    printf("Finalizo el programa");
}

