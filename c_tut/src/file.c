#include <stdio.h>

int main(void) {
	/* file handles */
	FILE *outputFile=NULL;
	
	/* open files for writing*/
	outputFile = fopen("cwork.dat", "w");
	if(outputFile == NULL)
		return(1);    /* need to do explicit ERROR CHECKING */
	
	/* write some data into the file */
    fprintf(outputFile, "Hello there");
	
	/* don’t forget to close file handles */
	fclose(outputFile);
	
    return 0;
}
