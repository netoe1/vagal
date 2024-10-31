#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *output = NULL;
char *strings[] = {"OK","InternalServerError","BadRequest","Unauthorized","NotFound","NotImplemented","InsufficientStorage"}; // Put the tokens that you want

int main(void){
	output = fopen("output.ts","w");
	int i = 0;

	for( i = 0; i < 7;i++){
		fprintf(output,"if(err instanceof %s) {}\n",strings[i]);
	}
	fclose(output);
	return 0;
}
