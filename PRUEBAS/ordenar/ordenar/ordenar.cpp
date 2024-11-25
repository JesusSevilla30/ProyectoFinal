#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300

void main()
{
    int i, j;
    char aux[50];
    int auxNum;

    if (opcion == 0)
    {
        for (i = 0; i < elementos; i++)
        {
            for (j = 0; j < elementos - 1; j++)
            {
                if (strcmp(szPalabras[j], szPalabras[j + 1]) > 0)
                {
                    strcpy(aux, szPalabras[j]);
                    strcpy(szPalabras[j], szPalabras[j + 1]);
                    strcpy(szPalabras[j + 1], aux);

                    auxNum = iEstadisticas[j];
                    iEstadisticas[j] = iEstadisticas[j + 1];
                    iEstadisticas[j + 1] = auxNum;
                }
            }
        }
    }
    else if (opcion == 1)
    {
        for (i = 0; i < elementos; i++)
        {
            for (j = 0; j < elementos - 1; j++)
            {
                if (iEstadisticas[j] > iEstadisticas[j + 1])
                {
                    auxNum = iEstadisticas[j];
                    iEstadisticas[j] = iEstadisticas[j + 1];
                    iEstadisticas[j + 1] = auxNum;

                    strcpy(aux, szPalabras[j]);
                    strcpy(szPalabras[j], szPalabras[j + 1]);
                    strcpy(szPalabras[j + 1], aux);
                }
            }
        }
    }
}
}