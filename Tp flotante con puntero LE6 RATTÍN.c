#include <stdio.h>
#include <stdint.h> 
int main (){ 
    float mivar;
    printf ("Insertar un número ");
    scanf ("%f", &mivar);
    char *p = (char *)&mivar;
    printf ("mivar vale: %f\n", mivar);
  //  printf("%d\n",sizeof(&mivar));
    printf ("la dirección de mivar es: 0x%x\n", (unsigned int)((long int)&mivar));
    printf ("la posición del puntero es: 0x%x\n",(unsigned int)((long int)p));
    printf ("la posición del puntero apunta hacia: 0x%x%x%x%x\n", *(p+3),*(p+2),*(p+1),*(p));
  
    return 0;
}



 
 




