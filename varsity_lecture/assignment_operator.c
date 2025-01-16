#include <stdio.h>

int main() {
 int a =4,b;
 b= a++;                    // post increment a is 4 first then assined to b
 printf("a=%d b=%d\n",a,b); // a=5 b=4


b= ++a;                     // pre increment a is incremented to 6 first the assigned to b
printf("a=%d b=%d\n",a,b);  // a=6 b=6

//decrement

a--;
printf("a=%d\n",a); // a=5


//increment and decrement 
a=4,b=0;
b = a--;
printf("a=%d b=%d\n",a,b); // a=3 b=4

b = --a;
printf("a=%d b=%d\n",a,b); // a=2 b=2

//combined increment and decrement 
 a=1,b=2;int c=3;

printf("%d",(++a)-(b--)+(--c));//2-2+2=2


}