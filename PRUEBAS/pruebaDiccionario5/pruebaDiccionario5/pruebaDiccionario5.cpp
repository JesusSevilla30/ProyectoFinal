#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define TAMTOKEN 300
#define NUMPALABRAS 300

int main()
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

	//Inicia el arreglo de estadisticas
	for (i = 0; i < NUMPALABRAS; i++)
		iEstadisticas[i] = 0;

	//Lee el nombre del archivo desde donde se recupera el diccionario
	//strcpy(szNombre, "anita.txt"); //depurar con este archivo, es el de la especificacion
	printf("Archivo para el diccionario: ");
	scanf("%s", szNombre);

	//carga el diccionario
	(szNombre, szPalabras, iEstadisticas, iNumElementos);

	//Pinta las palabras del diccionario y sus estadisticas
	for (int j = 0; j < iNumElementos; j++)
		printf("%-12s %i\n", szPalabras[j], iEstadisticas[j]);


	//Mientras no se capture el comando para salir y poner <fin>
	strcpy(szPalabraLeida, "");
	while (strcmp(szPalabraLeida, "fin"))
	{
		//pide una palabra
		printf("Palabra---'fin' para terminar---: ");
		scanf("%s", szPalabraLeida);
		for (i = 0; i < strlen(szPalabraLeida); i++)
		{
			szPalabraLeida[i] = tolower(szPalabraLeida[i]);
		}
	}