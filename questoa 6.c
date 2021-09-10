#include <stdio.h>
#include <stdlib.h>

main() {

float num, soma=0, media=0;
int i;

//inicio do laco for
for (i=1; i<=10; i++) {


printf("Informe o numero:\t\t");
scanf("%f", &num);

soma = soma + num;
}

//a media deve ser calculada apos a iteracao
media = soma / 10;
printf("A media e: %f", media);
}
