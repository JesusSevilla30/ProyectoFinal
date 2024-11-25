
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300

void main()
{
    char* szPalabraLeida,                     // Palabra a clonar
        char    szPalabrasSugeridas[][TAMTOKEN],    //Lista de palabras clonadas
        int& iNumSugeridas)                      //Numero de elementos en la lista
        {
            int longitud, posicion = 0;
            int i, j, m, jPalabra = 0, apuntador, jApuntador, contador;
            int posicion2 = 0;

            char letras[] = { "abcdefghijklmnopqrstuvwxyz" };
            char letras2[] = { "ñáéíóú" };

            //char szPalabraLeidaCopiaDef[TAMTOKEN];
            char szPalabraLeidaCopia[TAMTOKEN];
            char szPalabraLeidaCopia2[TAMTOKEN];
            char palabrafin[TAMTOKEN];
            char auxiliarPal[TAMTOKEN];
            char auxiliarPal2[TAMTOKEN];

            longitud = strlen(szPalabraLeida);

            for (i = 0; i < longitud; i++)
            {
                for (j = 0; j < strlen(letras); j++)
                {
                    if (szPalabraLeida[i] == letras[j])
                    {
                        contador++;
                    }
                    else if (szPalabraLeida[i] == letras2[0])
                    {
                        posicion = i;
                    }
                }
            }
            if (posicion != 0)
            {
                apuntador = 0;
                for (i = 0; i < longitud; i++)
                {
                    if (szPalabraLeida[i] != letras2[1])
                    {
                        palabrafin[apuntador] = szPalabraLeida[i];
                        apuntador++;
                    }
                }
                strcpy(szPalabraLeida, palabrafin);
                longitud--;
            }

            //inicio eliminacion
            for (i = 0; i < longitud; i++)
            {
                apuntador = 0;
                memset(palabrafin, 0, 50);

                for (j = 0; j < longitud; j++)
                {
                    if (i != j)
                    {
                        palabrafin[apuntador] = szPalabraLeida[j];
                        apuntador++;
                    }
                }
}

