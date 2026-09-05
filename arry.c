#include <stdio.h>

void reverse(int a[], int);

int main()
{

int arr[]= {1,2,3,4,5};

reverse(arr,5);

printf("\n%u",arr);

    return 0;
}
 void reverse (int ar[], int n)
 {  

    for(int i=0;i<=n-1;i++)
    {   int h= (int) (n)/2-1;
        if(i<=h)
        {  
        int t1;
        t1=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=t1;
        
        }

    }

    for(int i=0;i<=n-1;i++)
{

 printf("%d : %d\n",i, ar[i]);


}
    
printf("%u",ar);





 }