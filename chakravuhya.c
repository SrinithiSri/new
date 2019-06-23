#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,m,lr,lc,l=0,k=0,c=1,s=1,b[10],d[10],v=0;
    scanf("%d %d",&n,&m);
    lr=n-1;
    lc=m-1;
b[v]=0;
d[v]=0;
v++;
    while(k<=lr && l<=lc)
    {
        for(i=k;i<=lc;i++)
        {
            a[k][i]=c;
            if(c%11==0) 
            { 
                s++;
                b[v]=k;
                d[v]=i;
                v++;
            }
            c++;
        }
        k++;
        for(i=k;i<=lr;i++)
        {
            a[i][lc]=c;
            if(c%11==0) 
            { 
                s++;
                b[v]=i;
                d[v]=lc;
                v++;
            }
            c++;
        }
        lc--;
        if(k<=lr)
        {
            for(i=lc;i>=l;i--)
            {
                a[lr][i]=c;
            if(c%11==0) 
            { 
                s++;
                b[v]=lr;
                d[v]=i;
                v++;
            }
                c++;
            }
        }
        lr--;
        if(l<=lc)
        {
            for(i=lr;i>=k;i--)
            {
                a[i][l]=c;
            if(c%11==0) 
            { 
                s++;
                b[v]=i;
                d[v]=l;
                v++;
            }
                c++;
            }
        }
        l++;
    }
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("total power ponit: %d\n",s);
    for(i=0;i<v;i++)
    {
            printf("(%d,%d)\n",b[i],d[i]);
    }

    return 0;
}
