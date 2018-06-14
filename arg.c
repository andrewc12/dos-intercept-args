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
    int totallen = 0;
    char str[1024];
    
    printf("Number of argc %d \n", argc);
    for (i = 0;i < argc;i++)
    {  
        len = strlen(argv[i]);
        printf("Length of |%s| is |%d|\n", argv[i], len); /* Printing the string */
        totallen = totallen + strlen(argv[i]); /*  get  total length of string. use to see if bigger than buffer */
    }
    totallen = totallen + 1;
    printf("total Length is |%d|\n", totallen);



    for (i = strlen(argv[0]);i >= 0;i--)
    {
	if (argv[0][i] == '.'){
	    i--;
	    argv[0][i] = '_'; /* Change last char before .extension to _ */
	    break;
	}
    }    
    
    /* https://stackoverflow.com/questions/308695/how-do-i-concatenate-const-literal-strings-in-c */

    if (len <= 1024){ /* check to see if it will fit then concatenate argv*/
	    strcpy(str, argv[0]);
        for (i = 1;i < argc;i++)
        {
            strcat(str, " ");
            strcat(str, argv[i]);
        }
        printf("str is |%s|\n", str);
	}

    
    
    printf("Wait for 5 seconds to exit.\n");
    sleep(5);
    
    /* https://www.tutorialspoint.com/c_standard_library/c_function_system.htm */
    
    system(str);
    
    return(0);
    


}
