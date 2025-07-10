//Find the Highest Frequency Character in the String
#include<stdio.h>
int main()
{
    char s[20],a[20];
    printf("Enter the string:\n");
    scanf("%s",s);
    int i,j,z=0,C,c=0,d=0,b[20],B;
    
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
        a[c++] = s[i];
        b[d++] = C;
        }
        
    }
    
    B=b[0];

    for(i=0;i<d;i++)
    if(b[i]>B)
    z = i;

    printf("'%c' appears %d times\n",a[z],b[z]);

}