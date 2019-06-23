#include <stdio.h>
int main() {
 int t,n,i,k=0,sum=0,s1=0,temp=0,j,m;
 long int candy[100009],sec[100009];
 scanf("%d",&t);
 for(int l=0;l<t;l++)
 {
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&candy[i]);
    }
    for(m=0;m<n;m++)
    {
        for(j=m+1;j<n;j++)
        {
        if(candy[m]>candy[j])
        {
        temp=candy[m];
        candy[m]=candy[j];
        candy[j]=temp;
        }
        }
    }
 sum=0;
 k=0;
    for(i=0;i<n;i++)
    {
    sum=sum+candy[i];
    sec[k]=sum;
    k++;
    }
 s1=0;
    for(i=1;i<k;i++)
    {
        s1=s1+sec[i];
    }
    printf("%d\n",s1);
 }
 return 0;
}
