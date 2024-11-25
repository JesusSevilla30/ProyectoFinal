
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300
int main()
{
    char* szPalabraLeida,                    
        char    szPalabrasSugeridas[][TAMTOKEN],    
        int& iNumSugeridas)                      
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
}