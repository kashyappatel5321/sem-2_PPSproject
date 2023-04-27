#include<stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("enter value in centigrade:");
    scanf("%f",&c);
    f=1.8*c+32;
     printf("\n%f centigrade = %f fareheit",c,f);
    return 0;
}