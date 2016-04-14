#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	srand(argc == 3 ? atoi(argv[2]) : time(NULL));
	int n = atoi(argv[1]);
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	int i= n*n;

	char **square = new char *[1];
	square[0] = new char [i];

	for (i=0; i<(n*n); i++)
		square[0][i] = 'a' + rand()%('z'-'a');

	return square;
}

void drawCharSquare(char **square, int n)
{
	for (int i=0; i<(n*n); i++)
		printf(i%n==(n-1) ? "%c \n" : "%c ", square[0][i]);
}