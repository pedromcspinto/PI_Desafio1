#include <stdio.h>
#include <stdlib.h>

float func1(int x);
float func2(int x);
int func3(int x);


int main()
{
    int n;
    float f1, f2;
    printf("Va introduzindo valores para n (Introduza uma letra para encerrar)\n\n");

    while(scanf("%d", &n)){
    f1= func1(n);
    f2= func2(n);
    putchar('\n');

    if(n==3)
    printf("O limite da sucessao de f1 e: Divergente\n");
    else if(f1==0)
    printf("O limite da sucessao de f1 e: 0\n");
    else if(f1>1)
    printf("O limite da sucessao de f1 e: %d\n", (int) f1);
    else
    printf("O limite da sucessao de f1 e: %.1f\n", f1);

    if(n==1)
    printf("O limite da sucessao de f2 e: Divergente\n");
    else if(n==0)
    printf("O limite da sucessao de f1 e: 0\n");
    else if(f2>1)
    printf("O limite da sucessao de f2 e: %d\n", (int) f2);
    else
    printf("O limite da sucessao de f2 e: %.1f\n", f2);

    if(n>1000)
    printf("O limite da sucessao de f3 e: +OO");
    else
    printf("O limite da sucessao de f3 e: %d", func3(n));

    putchar('\n');
    putchar('\n');
    }

    printf("A encerrar...");
}

float func1(int x){
float res;
res = (float) (x*x-x)/((x-3)*(2*x-1));
return res;
}

float func2(int x){
float res;
res = (float) (3*x)/(x-1);
return res;
}

int func3(int x){
int res;
res=(2*x)-4;
return res;
}
