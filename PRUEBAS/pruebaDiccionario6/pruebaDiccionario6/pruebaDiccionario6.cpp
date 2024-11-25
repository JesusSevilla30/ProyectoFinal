#include <stdio.h>

void QuitarCaracteres(char* palabra);

void main()
{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300

    char szPalabras[][TAMTOKEN],
        int iEstadisticas[],
        int& iNumElementos)
{
    FILE* fp;
    char palabra[TAMTOKEN];
    iNumElementos = 0;
    int i;

    fp = fopen(szNombre, "rb");

    while (feof(fp) == 0)
    {
        fscanf(fp, "%s", palabra);
        QuitarCaracteres(palabra);
        strcpy(szPalabras[iNumElementos], palabra);
        iNumElementos++;
    }
   

}

