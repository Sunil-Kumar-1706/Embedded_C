//Find lowest Frequency Character in a string
#include<stdio.h>
int main()
{
    char s[20],a[20];
    printf("Enter the string:\n");
    scanf("%s",s);
    printf("\n");

    int i,j,z=0,C,c=0,d=0,b[20],r[20],B,p=0,t,m[20],n=0,q=0;
    
    for(i=0;s[i];i++)
    {
        C = 1;
        for(j=0;j<i;j++)
        if(s[i] == s[j])
        break;

        if(i == j)
        {
            for(j=i+1;s[j];j++)
            {
                if(s[i] == s[j])
                C++;
            }
        }

        for(j=0;j<i;j++)
        if(s[j]==s[i])
        break;

        if(i == j)
        {
            a[c++] = s[i];
            b[d++] = C;
        }    
    }

    B = b[0];

    for(i=0;i<d;i++)
    {
    if(b[i]<B)
    {
        q=1;
        r[p++]=b[i];
        m[n++]=a[i];
    }
    }

    if(q==1)
    {
        for(i=0;i<p;i++)
        printf("'%c' appears %d times\n",m[i],r[i]);
    }
    else
    {
        for(i=0;i<d;i++)
        printf("'%c' appears %d times\n",a[i],b[i]);
    }
    printf("\n");
}