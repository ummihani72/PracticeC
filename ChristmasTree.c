#include <stdio.h>

int main()
{
	int ii, jj, kk, height, spacecount, starcount;


    //printf("Enter no of line to print:");
    //scanf("%d", &height);
    height = 7;
    spacecount = height;
    for (ii = 1; ii <= height; ii++)
    {
        for (jj = 1; jj <= spacecount-1; jj++)
        {
            printf(" ");
        }
        spacecount--;

        starcount = 1 + (2 * (ii - 1));

        for (kk = 1; kk <= starcount; kk++)
        {
            printf("*");
        }

        printf("\n");
    }
	
	return 0;
}