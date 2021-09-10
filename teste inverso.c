#include <stdio.h>
#include <stdlib.h>

int inverter (int num ){
int aux, inverso;


for ( ; num > 0; ) {

aux = num % 10;
inverso = inverso * 10 + aux;
num /= 10;
}
return inverso;
}
main ()
{
int vnum, resultado, digitado;

printf ( "Digite um numero:\n");
scanf ("%d", &vnum);
digitado = vnum;

resultado = inverter (vnum);

printf ("Numero digitado: %d\n", digitado);
printf ("Numero inverso: %d\n",resultado);
}
