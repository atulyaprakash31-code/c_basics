#include <stdio.h>

int arrrev(int a[]);
int main(){

int a[5]={1,10,3,5,2};
arrev(a);

    return 0;
}





int arrev(int a[]){

for(int i=0; i<5;i++){
    printf("%d\t",a[i]);
}

printf("\n");

int ar[5];
int x=0;
for(int i=0;i<5;i++){

    for (int j=0;j<5;j++){

        if(i!=j){
            if(a[i]>a[j]){
                x++;
            }
        }
  
  
    }

    ar[x]=a[i];
    x=0;
}
for(int i=0;i<5;i++){
    a[i]=ar[i];
}
for(int i=0; i<5;i++){
    printf("%d\t",ar[i]);
}


}