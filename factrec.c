#include <stdio.h>
int fact(int);


int main()
 {
int input;
    scanf("%d",&input);
    printf("%d",fact(input));
    
    
}   
int fact(int a)
{
if(a==1)
{
    

    return 1;
}

int num=fact(a-1);
int total=num*a;
return total;

}