#include <string.h>
#include <stdio.h>
int main() {

    //Crear dos cadenas diferentes
 char str1[] = "Hola";
char str2[] = "Mundo";

//Usar la función strcmp para comparar las cadenas
int comparison = strcmp(str1, str2);
if (comparison == 0)

//Imprimir el resultado de la comparación
{ printf("Las cadenas son iguales.\n");
}
else { printf("Las cadenas son diferentes.\n");
}
return 0;
}