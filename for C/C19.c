#include <stdio.h>
#include <locale.h>

#define bool int
#define true 1
#define false 0


int main()
{
	setlocale(0, "Russian");
	bool checker1 = true;
	FILE * hlpme;
	FILE * nyan;
	char tff[255];
	int i = 0;
	for (i = 0; i < 255; i++)
		tff[i] = '\0';
	printf("Введите путь к вашему файлу (Например: C:/Papka/file.txt): ");
	gets(tff);
	if (tff == NULL)
		printf("Данный файл пустой)");
	hlpme = fopen(tff, "rb");
	int fsize = 0, counter = 0, f = 0, index = 0, j = 0;
	char * buffer;
	char * dog;

	fseek(hlpme, 0, SEEK_END);
	fsize = ftell(hlpme);
	rewind(hlpme);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, hlpme);
	fclose(hlpme);
	f = fsize;
	dog = (char*)malloc(fsize);
	for (i = 0; i < fsize; i++)
	{
		if (buffer[i] == '"') checker1 = !checker1;
		if (buffer[i] == '/' && buffer[i+1] == '/' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize;j++)
			{
				if (buffer[j] == 0x0d && buffer[j + 1] == 0x0a)
				{
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else if (buffer[i] == '/' && buffer[i + 1] == '*' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize; j++)
			{
				if (buffer[j] == '*' && buffer[j + 1] == '/')
				{
					counter += 2;
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else
		{
			dog[index] = buffer[i];
			index++;
		}
	}
	
	nyan = fopen(tff, "w");
	fwrite(dog, 1, f, nyan);
	fclose(nyan);
	free(buffer);
	printf("Ваш файл был изменен!\n");
	return 0;
}
