# BuffOver_PoC
Breve ejercicio para entender la vulnerabilidad de Buffer Overflow y como explotarla

## Introducción
Iniciamos escribiendo un programa en C intencionalmente vulnerable para comprender el ejercicio.

```C
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
  char nombre[10];
  strcpy(nombre,argv[1]);
  printf("%s",nombre);
  return 0;
}
```
