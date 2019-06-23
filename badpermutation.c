#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int heappermute(long int s[],long int k);
void swap (long int *x, long int *y);
int print(const long int *s);
long int k=0,a[100000],m=0,s[100000];
int main()
{
long int testcase,i,j=0,l=0;
scanf("%ld",&testcase);
long int N[testcase];
for(i=0;i<testcase;i++)
{
scanf("%ld",&N[i]);
}
//if(testcase>=1 && testcase<=120000
{
for(i=0;i<testcase;i++)
{
// if(N[i]>=1 && N[i]<=100)
{
for(j=1;j<=N[i];j++)
{
if(N[i]%j==0)
{
s[k]=j;
k++;
}
}
}
for(int f=0;f<k;f++)
{
a[l]=s[f];
l++;
}
m=heappermute(s,k);
printf("%ld ",m);
for( j=0;j<k;j++)
{
s[j]=='\0';
a[j]=='\0';
}   
k=0;
m=0;
l=0;
}
}
return 0;
}
void swap (long int *x, long int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
int print(const long int *v)
{
int i,j=0,c=0;
int size = k;
if (v != 0)
 
    {

    for ( i = 0; i <size-1; i++)
 
    {

       // printf("%ld",v[i]);

        if(v[i]==s[j])

        {
           
 if((v[i]<v[i+1] && s[j]<s[j+1])&&(v[i]!=a[i] || v[i+1]!=a[i+1]) &&(v[k-1]!=a[k-1]))

            {

            c++;

            }
           
 else if((v[i]==a[i]) ||(v[k-1]==a[k-1]))

            {

            c--;

            }

            
            j++;

        }

        else

        {

            j++;

        }

    }

return c;

    }

    }

int heappermute(long int s[], long int k)
 
{

    int i,n;

    if (k == 1)
 
    {

        n=print(s);

        if(n>0)

        {

        m=m+1;

        }

	}

    else

    {

    for (i = 0; i < k; i++)
 
    {

        heappermute(s, k-1);
 
           if (k % 2 == 1) 

            {

                swap(&s[0], &s[k-1]);

	        }

            else 

            {

                swap(&s[i], &s[k-1]);

            }

}

    }

    return m;

}
