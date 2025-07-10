//Find the length of the longest substring with no repeating characters.

#include<stdio.h>
#include<string.h>

int fun(char s[])
{
    int i,j,start,len,maxlen=0;
    start=0;
    for(i=0;s[i];i++)
    {
        for(j=start;j<i;j++)
        {
            if(s[i]==s[j])
            {
                start=j+i;
                break;
            }
        }
        len=i-start+1;
        if(len>maxlen)
        {
            maxlen=len;
        }
    }
    return maxlen;
}


int main()
{
    char s[20] = "abcabcbb";
    
    printf("%d",fun(s));
}
