/*
 * C Program to Print the Program Name and All its Arguments
 */
#include <stdio.h>
#include <dos.h>
void main(int argc, char *argv[])    /* command line Arguments */
{
    int i;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);        /* Printing the string */
    }
    printf("\n");
    printf("Wait for 5 seconds to exit.\n");
    sleep(5);

    printf("argc %d \n", argc);
    for (i = argc;i >= 0;i--)
    {
	printf("%d \n", i);
	if (argv[i] == '.'){
	    i--;
	    printf("%s %d \n", argv[i], i);        /* Printing the string */
	    argv[i] = '_'; /* Change last char before .extension to _ */
	    break;
	}
    }

    for (i = 0;i < argc;i++)
    {
	printf("%s ", argv[i]);        /* Printing the string */
    }
    printf("\n");
    printf("Wait for 5 seconds to exit.\n");
    sleep(5);

}