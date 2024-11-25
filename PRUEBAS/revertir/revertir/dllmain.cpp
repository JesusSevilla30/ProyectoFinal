#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
    int posicion2 = -1;
    int apuntador = 0;
    int k, h, m;

    char auxiliarPal[TAMTOKEN];
    char auxiliarPal2[TAMTOKEN];
    char letras2[] = { "ñáéíóú" };

    if (posicion != 0)
    {
        for (k = 0; k < longitud; k++)
        {
            if (szPalabraLeidaCopia2[k] == letras2[0])
            {
                posicion2 = k;
            }
        }

        memset(auxiliarPal, 0, 50);
        memset(auxiliarPal2, 0, 50);

        apuntador = 0;
        for (h = 0; h < posicion2; h++)
        {
            auxiliarPal[apuntador] = szPalabraLeidaCopia2[h];
            apuntador++;
        }

        apuntador = 0;
        for (m = posicion2 + 1; m < longitud; m++)
        {
            auxiliarPal2[apuntador] = szPalabraLeidaCopia2[m];
            apuntador++;
        }

        if (posicion2 >= 0)
        {
            strcat(auxiliarPal, "ñ");
            strcat(auxiliarPal, auxiliarPal2);
        }
        else
        {
            strcat(auxiliarPal, auxiliarPal2);
        }
        strcpy(szPalabrasSugeridas[jPalabra], auxiliarPal);
        //printf("aux: %s\n",szPalabrasSugeridas[jPalabra]);
        jPalabra++;
    }
    else
    {
        strcpy(szPalabrasSugeridas[jPalabra], szPalabraLeidaCopia2);
        //printf("%s\n",szPalabrasSugeridas[jPalabra]);
        jPalabra++;
    }

    return jPalabra;
}
}