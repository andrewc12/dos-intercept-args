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
        printf("\n");
    }
    printf("Wait for 5 seconds to exit.\n");
    sleep(5);
}