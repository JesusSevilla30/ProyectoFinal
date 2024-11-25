#include <stdio.h>
#include <string.h>
#define TAMTOKEN 300
#define MAXPALABRAS 100


int main()
{
	FILE* fp;
	char buffer[TAMTOKEN];
	char palabra[TAMTOKEN];
	char diccionario[MAXPALABRAS][TAMTOKEN];
	int estadistica[TAMTOKEN] = {0};
	int conta;
	int iNumPalabra;
	char Archivo[50];

	for (conta = 0; conta < 100; conta++)
		estadistica[conta] = 0;
	printf("Nombre del Archivo:");
	scanf_s("%s",Archivo,50);
	fopen_s(&fp, Archivo, "r");
	if (Archivo != NULL)
	{
		printf("Jalo");
		iNumPalabra = 0;
		while (!feof(fp))
		{
			fgets(buffer, TAMTOKEN, fp);
			conta = 0;
			int contaPalabras = 0;

			while (buffer[conta] != '\0')
			{
				if (buffer[conta] == '\0' || buffer[conta] == ' ')
				{
					palabra[contaPalabras] = '\0';
					contaPalabras = 0;
					strcpy_s(diccionario[iNumPalabra], TAMTOKEN, palabra);
					estadistica[iNumPalabra++]++;

				}
				else
				{
					palabra[contaPalabras++] = buffer[conta];
				}
				conta++;

			}
		}

		printf("\nDiccionario completo\n");
		for (conta = 0; conta < iNumPalabra; conta++)
			printf("%s %i\n", diccionario[conta], estadistica[conta]);
		fclose(fp);
	}
	else
	{
		printf("No Jalo");
	}
}