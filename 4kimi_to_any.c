#include<stdio.h>

int main(){
    int k,M,f,i,c;
    printf("enter value in km:");
    scanf("%d",&k);
    M=1000*k;
    printf("1km=%dmeter\n",M);
    f=k*3280.84;
    i=M*39.37;
    c=M*100;
    printf("1km=%dmeter\n",M);
    printf("1km=%dfeet\n",f);
    printf("1km=%dinch\n",i);
    printf("1km=%dcm",c);
    return 0;
}