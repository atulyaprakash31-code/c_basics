

#include <stdio.h>
int dia(int);
int main()
{
for(;;){
int input;
scanf("%d",&input);
dia(input+1);
}

    return 0;
}

int dia(int n){

for(int i=0;i<n-1;i++){

for(int k=0;k<n;k++){

if(k==n-i){
    printf("*");
}
else {
    printf(" ");
}
}
for (int l=2;l<n+1;l++){

    if(l==i){
        printf("*");

    }

    else {

    printf(" ");
    }
}
if(i!=n-1){
printf("\n");}
}


for(int i=0;i<n-1;i++){


for (int l=0;l<n-1;l++){

    if(l==i+1){
        printf("*");

    }

    else {

    printf(" ");
    }
}
for(int k=0;k<n;k++){

if(k==n-i-2){
    printf("*");
}
else {
    printf(" ");
}
}
printf("\n");

}






}

