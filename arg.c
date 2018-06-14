/*
 * C Program to Print the Program Name and All its Arguments
 */
#include <stdio.h>
#include <dos.h>
#include <string.h>

void main(int argc, char *argv[])    /* command line Arguments */
{
    int i;
    int len;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);        /* Printing the string */
        len = strlen(argv[i]);
        printf("Length of |%s| is |%d|\n", argv[i], len);
    }    


    printf("Number of argc %d \n", argc);
    for (i = strlen(argv[0]);i >= 0;i--)
    {
	/*printf("%d \n", i);*/
	if (argv[0][i] == '.'){
	    i--;
	    /*printf("%s %d \n", argv[i], i);        /* Printing the string */
	    argv[0][i] = '_'; /* Change last char before .extension to _ */
	    break;
	}
    }    
    
    
    
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);        /* Printing the string */
        len = strlen(argv[i]);
        printf("Length of |%s| is |%d|\n", argv[i], len);
    }        
    
    
    
    printf("Wait for 5 seconds to exit.\n");
    sleep(5);

}
