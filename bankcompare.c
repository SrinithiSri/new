#include <stdio.h>
#include<math.h>
int main()
{
 double principal,sum=0,emi,rate,monthly,bank[2],j1,j;
 int tyr,k,n,slot,yr1,sqr,m=0,i;
    scanf("%lf",&principal);
 scanf("%d",&tyr);
 for(k=0;k<2;k++)
 {
 scanf("%d",&n);
 sum=0;
 for(i=0;i<n;i++)
 {
     scanf("%d",&slot);
     scanf("%lf",&rate);
     j=rate/1200;
     j1=1+j;
     yr1=slot*12;
     sqr=pow(j1,yr1);
     emi=principal*(j/(1-(1/(sqr))));
     monthly=emi*yr1;
     sum=sum+monthly;
 }
 bank[m]=sum;
 m++;
 }
 if(bank[0]<bank[1])
 {
 printf("Bank A");
 }
 else
{
printf("Bank B");
}
 return 0;
}
