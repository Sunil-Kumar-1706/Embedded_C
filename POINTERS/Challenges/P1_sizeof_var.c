/*1.How can you find the size of a data type without using the sizeof operator, using pointer arithmetic?*/

#include <stdio.h>
int main() 
{
 short int* p = NULL;
 short int* p1 = p+1;
 
 int res = (char*)p1-(char*)p;
 printf("%d\n",res);
}
