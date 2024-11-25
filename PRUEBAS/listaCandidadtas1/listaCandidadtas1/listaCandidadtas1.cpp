
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300

void main()
{
    char    szPalabrasSugeridas[][TAMTOKEN],    //Lista de palabras clonadas
        int     iNumSugeridas,                      //Lista de palabras clonadas
        char    szPalabras[][TAMTOKEN],             //Lista de palabras del diccionario
        int     iEstadisticas[],                    //Lista de las frecuencias de las palabras
        int     iNumElementos,                      //Numero de elementos en el diccionario
        char    szListaFinal[][TAMTOKEN],           //Lista final de palabras a sugerir
        int     iPeso[],                            //Peso de las palabras en la lista final
        int& iNumLista)                          //Numero de elementos en la szListaFinal
        {
            int i, j, m;

            iNumLista = 0;
            
            int iEstadisticas2[100];
            //printf("num sugeridas: %i\n",iNumSugeridas);
            //printf("num elementos: %i\n",iNumElementos);

            for (i = 0; i < iNumSugeridas; i++)
            {
                for (j = 0; j < iNumElementos; j++)
                {
                    if (strcmp(szPalabrasSugeridas[i], szPalabras[j]) == 0)
                    {
                        strcpy(szListaFinal[iNumLista], szPalabras[j]);
                        iPeso[iNumLista] = iEstadisticas[j];
                        iNumLista++;
                    }
                }
            }

            Eliminar(szListaFinal, iNumLista, iEstadisticas2);
            Ordenar(szListaFinal, iNumLista, iPeso, 1);
}
}

