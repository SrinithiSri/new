#include <stdio.h>
int prime(int b);
int main() {
 int i,j,n,f=0,a[25],c,sum=0,count=0,k=0;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
     f=1;
     for(j=2;j<=n/2;j++)
     {
         if(i%j==0)
         f=0;
     }
     if(f==1)
     {
        a[k]=i;
        k++;
     }
 }
 for(i=0;i<k;i++)
 {
     sum=sum+a[i];
    c= prime(sum);
    if(c==1)
    {
    count++;
    }
 }
 printf("%d",count);
 return 0;
}
int prime(int b)
{
    int j,f;
   f=1;
     for(j=2;j<=b/2;j++)
     {
         if(b%j==0)
         f=0;
     }
     if(f==0)
     return 1;
     else
     return 0;
}
