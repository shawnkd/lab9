#include <stdio.h>
#include <stdlib.h>


int main() {

	FILE *f1 = fopen("test_taker_names.txt", "r");
	FILE *f2 = fopen("newomr.txt", "r");

	FILE *f3 = fopen("full_data.csv", "w");
	char c;

	if(f1 == NULL || f2 == NULL)
	{
		puts("Could not open files");
		exit(0);
	} 

	while((c = fgetc(f1)) != EOF)
		fputc(c, f3);

	while((c= fgetc(f2)) != EOF)
		fputc(c, f3);

	printf("Merged test_taker_names.txt and newomr.txt into full_data.csv");

	fclose(f1);
	fclose(f2);
	fclose(f3);

	return 0;

}

