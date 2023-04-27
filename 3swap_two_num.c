#include<stdio.h>
#include<conio.h>
int main(){
    int a=10,b=20;
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);
    b=b-a,a=a+b;
    printf("value of b=%d\n",b);
    printf("value of a=%d",a);
    return 0;
}