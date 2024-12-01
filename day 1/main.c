#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fptr;
	fptr = fopen("input.txt", "r");
	fseek(fptr, 0, SEEK_END);
	long len = ftell(fptr);
	fseek(fptr, 0, SEEK_SET);

	char* buf = 0;
	buf = malloc(len);
	fread(buf, 1, len, fptr);
	fclose(fptr);


	printf("%s", buf);

}
