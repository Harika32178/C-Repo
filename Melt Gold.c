#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y>=x)
    {
        printf("0\n");
        return 0;
    }
   int t=2*(x-y);
   double d=1+8*(x-y);
   if(d<0){
    printf("0\n");
    return 0;
   }
   double i=(-1+sqrt(d))/2;
   printf("%d\n",(int)ceil(i));
   return 0;
}