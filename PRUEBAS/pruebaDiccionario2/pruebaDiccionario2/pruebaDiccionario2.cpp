#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAMTOKEN 300
#define MAXPALABRAS 100


int main()
{
	//VARIABLES
	FILE* fp;
	char buffer[TAMTOKEN];
	char palabra[TAMTOKEN];
	char diccionario[MAXPALABRAS][TAMTOKEN];
	int estadistica[TAMTOKEN] = { 0 };
	int conta;
	int iNumPalabra;
	char Archivo[50];
	char simbolos[] = ". ,;()";
	int i, j, posicion = 0;
	int numPalabras=0;
	// PROCESAR EL ARCHIVO
	while (fscanf_s(fp, "%s", buffer) != EOF) // Leer palabra por palabra
	{
		// NORMALIZAR LA PALABRA (MINÚSCULAS Y QUITAR SÍMBOLOS)
		int pos = 0;
		for (i = 0; buffer[i] != '\0'; i++)
		{
			if (!strchr(simbolos, buffer[i])) // Si no es un símbolo
			{
				buffer[pos++] = tolower(buffer[i]);
			}
		}
		buffer[pos] = '\0'; // Terminar la palabra

		// VERIFICAR SI YA ESTÁ EN EL DICCIONARIO
		int encontrada = 0;
		for (i = 0; i < numPalabras; i++)
		{
			if (strcmp(diccionario[i], buffer) == 0)
			{
				estadistica[i]++;
				encontrada = 1;
				break;
			}
		}

		// SI NO ESTÁ, AÑADIRLA
		if (!encontrada && numPalabras < MAXPALABRAS)
		{
			strcpy_s(diccionario[numPalabras], buffer);
			estadistica[numPalabras] = 1;
			numPalabras++;
		}
	}

	fclose(fp);

	// MOSTRAR RESULTADOS
	printf("\nPalabras y sus frecuencias:\n");
	for (i = 0; i < numPalabras; i++)
	{
		printf("%s: %d\n", diccionario[i], estadistica[i]);
	}

	return 0;
	/*ABRIR ARCHIVO
	for (conta = 0; conta < 100; conta++)
		estadistica[conta] = 0;
	printf("Nombre del Archivo:");
	scanf_s("%s", Archivo, 50);
	fopen_s(&fp, Archivo, "r");
	if (Archivo != NULL)
	{
		printf("Jalo");
	}
	else
	{
		printf("no jalo");
	}

	//QUITAR CARACTERES
	for (i = 0; i < strlen(palabra); i++)
	{
		int anadir = 1;
		for (j = 0; j < strlen(simbolos); j++)
		{
			if (palabra[i] == simbolos[j])
			{
				anadir = 0;
			}
		}
		if (anadir == 1)
		{
			palabra[posicion] = palabra[i];
			posicion++;
		}
	}
	palabra[posicion] = 0;

	for (i = 0; palabra[i] != '\0'; i++)
	{
		palabra[i] = tolower(palabra[i]);
	}


	//ELIMINAR REPETIDAS


	//ORDENAR

	return 0;*/
}