#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int column, row = 0;
	int borderrow;
	int i;

	printf("give column and row\n");
	scanf("%d %d", &column, &row);
	borderrow = row;
	
	for (; row; row--)
	{
		i = column;

		while (i)
		{
			if (row == 1 || row == borderrow)
				printf("*");
			else if (i == 1 || i == column)
				printf("*");
			else 
				printf(" ");
			i--;
		}
		printf("\n");
	}

	return 0;
}