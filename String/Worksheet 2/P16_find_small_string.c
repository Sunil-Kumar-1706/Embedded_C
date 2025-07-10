//Find the smallest substring in a string containing all characters of another string.
#include<stdio.h>
#include<string.h>
#include<limits.h>

char* fun(char a[],char b[])
{
    int i,x=strlen(a),y=strlen(b);
    
    if(y>x)
    return "Not Found";
    
    int m[256]={0},n[256]={0};

    for(i=0;i<y;i++)
    n[b[i]]++;

    int s=0,c=0,min_len = INT_MAX,min_start = -1;

    for(i=0;i<x;i++)
    {
        m[a[i]]++;

        if(n[a[i]]!=0 && m[a[i]]<=n[a[i]])
        c++;

        while(c==y)
        {
            if(i-s+1<min_len)
            {
                min_len=i-s+1;
                min_start=s;
            }
            
            m[a[s]]--;

            if(n[a[s]]!=0 && m[a[s]]<n[a[s]])
            c--;
            s++;
        }
    }

    if(min_start==-1)
    return "Not Found";

    static char r[100];
    strncpy(r,a+min_start,min_len);
    r[min_len]='\0';
    return r;
}

int main()
{
    char a[] = "this is a test string";
    char b[] = "tist";
    printf("%s\n",fun(a,b));
}