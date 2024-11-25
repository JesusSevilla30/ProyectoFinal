#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300

void main()
{
    void   ClonaPalabras(
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

        for (i = 0; i < longitud + 1; i++)
        {
            strcpy(szPalabraLeidaCopia, szPalabraLeida);
            for (j = 0; j < strlen(letras); j++)
            {
                memset(auxiliarPal, 0, 50);
                memset(auxiliarPal2, 0, 50);

                apuntador = 0;
                for (m = 0; m < i; m++)
                {
                    auxiliarPal[apuntador] = szPalabraLeidaCopia[m];
                    apuntador++;
                }
                auxiliarPal[apuntador] = letras[j];

                apuntador = 0;
                for (m = i; m < longitud; m++)
                {
                    auxiliarPal2[apuntador] = szPalabraLeidaCopia[m];
                    apuntador++;
                }

                strcat(auxiliarPal, auxiliarPal2);
                //printf("%s\n",auxiliar);
                jPalabra = revertir(posicion, auxiliarPal, szPalabrasSugeridas, jPalabra, longitud);
            }
        }
        //fin poner caracteres entre caracteres

        iNumSugeridas = jPalabra + 1;
    }
}
