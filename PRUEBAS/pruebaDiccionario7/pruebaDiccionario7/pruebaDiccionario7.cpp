
#include <stdio.h>

int main()
{
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

            
            iNumElementos--;
            Eliminar(szPalabras, iNumElementos, iEstadisticas);
          
            Ordenar(szPalabras, iNumElementos, iEstadisticas, 0);
 }
}
