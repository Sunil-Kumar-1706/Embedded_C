#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=2;
char c1='c';
float f1=2.5;
int *p;
char *c;
float *f;
p=(int *)malloc(1*sizeof(int));
c=(char *)malloc(1*sizeof(char));
f=(float *)malloc(1*sizeof(float));
for(i=0;i<1;i++){
p[i]=i+1;
c[i]=65+i;
f[i]=i+1.1;
}
for(i=0;i<1;i++){
printf("%d  ",*p++);
printf("%c  ",*c++);
printf("%f  \n",*f++);}
p=&i;
c=&c1;
f=&f1;
printf("%d  ",*p);
printf("%c  ",*c);
printf("%f  \n",*f);
p=(int*)c;
c=(char*)p;
f=(float*)p;
for(i=0;i<1;i++){
printf("%d  ",*p);
printf("%c  ",*c);
printf("%f  ",*f);}

}
