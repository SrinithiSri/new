#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,in,jn,v,c=0,max=0,max1=0;
    int b[100][100],k=0,l,f=1;
    scanf("%d %d",&n,&m);
    if((n>=2 && n<=100)&&(m>=2 && m<=100))
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            c=0;
            if(i&&j!=1)
            {
                if(a[i][j]==1)
                {
                    if(a[i-1][j-1]==1)
                    {
                        c++;
                    }
                    
                    if(a[i-1][j]==1)
                    {
                        c++;
                    }
                    if(a[i-1][j+1]==1)
                    {
                        c++;
                    }
                    if(a[i][j-1]==1)
                    {
                        c++;
                    }
                    if(a[i][j+1]==1)
                    {
                        c++;
                    }
                    if(a[i+1][j-1]==1)
                    {
                        c++;
                    }
                    if(a[i+1][j]==1)
                    {
                        c++;
                    }
                    if(a[i+1][j+1]==1)
                    {
                        c++;
                    }
                }
            }
            if(max<=c)
            {
                if(max==c)
                {
                
                   f=1;
                   b[i][j]=c;
                }
                else
                {
                    max=c;
                    f=0;
                    in=i;
                    jn=j;
                    v=c;
                    b[i][j]=c;
                }
            }
            
        }
        
    }
 for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
   if(f!=1)
    {
    printf("%d:%d:%d",in,jn,v);
    }
   else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                c=0;
                l=i;
                k=j;
                if(b[i][j]==max)
                {
                    printf("%d %d %d\n",i,j,b[i][j]);
                    for(l=i;l<1;l--)
                    {
                        c++;
                    }
                    while(k<=1)
                    {
                        k--;
                        c++;
                    }
                }
            }
            printf("%d ",c);
            if(c>max1)
            {
                max1=c;
                in=i;
                jn=j;
                v=b[i][j];
            }
        }
    printf("%d:%d:%d",in,jn,v);
    }
    return 0;
}
