#include<stdio.h>
int main ()
{
char name[100];
int age;
printf("enter your name:");
scanf("%s",&name);
printf("enter your age:");
scanf("%d",&age);
printf("hello, %s you are %d years old.\n", name,age);
printf("put your favorite hobby\n");
return 0;
}
