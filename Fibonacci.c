#include <stdio.h>

int main()
{
	int n, ii, T1, T2, temp;
    
    n = 9;
    T1 = 0;
    T2 = 1;
    
    for (ii = 1; ii <= n; ii++)
    {
        printf("%d, ", T1);
        temp = T1 +  T2;
        T1 = T2;
        T2 = temp;

    }
	
	return 0;
}