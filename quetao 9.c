#include <stdio.h>
#include <stdlib.h>

main() {

int cont, num;

cont = 0;

while (num != 0)

{

printf("Informe um numero:");
scanf("%d", &num);


if (num > 100 && num < 160 )

{

cont = cont + 1;
}

}
printf("Quantidade %d\n", cont);
}
