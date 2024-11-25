#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMTOKEN 300
#define NUMPALABRAS 3000

void main()
{
    char	szNombre[50];
    char	szPalabras[NUMPALABRAS][TAMTOKEN];
    int		iEstadisticas[NUMPALABRAS];
    int		i;
    int		iNumElementos;
    int		iNumSugeridas;
    char	szPalabraLeida[TAMTOKEN];
    char	szPalabrasSugeridas[3300][TAMTOKEN];
    char	szListaFinal[3300][TAMTOKEN];
    int		iPeso[3300]; //son 66 combinaciones por letra, mas o menos 3300 para 50 letras
    int		iNumLista;
    char* szNombre,
        char szPalabras[][TAMTOKEN];
        int iEstadisticas[];
        int& iNumElementos;
    
    FILE* fp;
    char palabra[TAMTOKEN];
    iNumElementos = 0;
    int i;
    
}