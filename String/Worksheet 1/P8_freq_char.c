//Count frequency of each character in a string

#include<stdio.h>
int main()
{
    char s[20],a[20];
    printf("Enter the string:\n");
    scanf("%s",s);
    int i,j,C,c=0,d=0,b[20];
    
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

    for(i=0;i<c;i++)
        printf("%c = %d\n",a[i],b[i]);
      
}