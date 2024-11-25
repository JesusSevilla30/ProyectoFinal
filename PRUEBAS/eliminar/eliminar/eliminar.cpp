#include <stdio.h>
#include <ctype.h>
#include <string.h>


void main()
{
    int i, j, k;
    for (i = 0; i < elementos; i++)
    {
        iEstadisticas[i]++;
    }

    for (i = 0; i < elementos; i++)
    {
        for (j = i + 1; j < elementos; j++)
        {
            if (strcmp(szPalabras[i], szPalabras[j]) == 0)
            {
                iEstadisticas[i] += 1;
                for (k = j; k < elementos; k++)
                {
                    strcpy(szPalabras[k], szPalabras[k + 1]);
                }
                elementos--;
                j--;
            }
        }
    }
    //iEstadisticas[elementos]-=1;
}
}