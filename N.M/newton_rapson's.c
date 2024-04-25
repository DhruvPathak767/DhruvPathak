#include <stdio.h>
#include<math.h>

#define e 0.001
#define f(x) x*x*x-4*x-9
#define df(x) 3*x*x-4

int main() {
    // Write C code here
    int i=1;
    float x0,x2,f0,f1,f2;
    printf("enter the two initial roots\n");
    scanf("%f",&x0);
    do{
        f0=f(x0);
        f1=df(x0);
        x2=x0-(f0/f1);
        f2=f(x2);
       
        printf("itteration=%d root=%f f(root)=%f \n",i,x2,f2);
        x0=x2;
        i++;
    }
    while(fabs(f2)>e);
    printf("the final root is %f",x2);

    return 0;
}