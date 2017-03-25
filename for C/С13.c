#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Russian");
	int word_length = 0;
	char c;
	int i;
	printf("Введите строку:\n");
	while ((c = getchar()) != '\n')                
	{
		if (c != ' ')                              
			word_length++;          
		else                                      
		{
			for (i = 0; i < word_length; i++)   
				printf("_");
			printf("\n");         
			word_length = 0;
		}
	}

	for (i = 0; i < word_length; i++) 
		printf("_");  
		printf("\n");

	return 0;
}
