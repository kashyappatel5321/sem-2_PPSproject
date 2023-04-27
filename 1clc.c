#include<stdio.h>
int main(){
float fn1,fn2,add,sub,mul,dev;
printf("this program do:\naddition\nsubstraction\nmultiplication\ndevition");
printf("\nput number 1:");
scanf("%f",&fn1);
printf("\nput number 2:");
scanf ("%f",&fn2);
add=fn1+fn2;
printf("\naddition of your num:%f",add);
sub=fn1-fn2;
printf("\nsubstraction of your num:%f",sub);
mul=fn1*fn2;
printf("\nmultiplication of your num:%f",mul);
dev=fn1/fn2;
printf("\ndevition of your num:%f",dev);

return 0;
}
