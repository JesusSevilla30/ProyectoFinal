#include <stdio.h>
#include <ctype.h>
#include <string.h>
{
    void	Diccionario(char* szNombre,
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
    }
}