

#include <stdio.h>

int main()
{
int x = (int) 5.00;
int *ptr = &x;
int **pptr =&ptr;
printf("ptr=%d\npptr=%d\n",ptr,pptr);
printf("%d",*(*pptr));



    return 0;
}