#include <stdio.h>

int main ()

{
int num1;
int num2;

num1 = 25;
num2 = 30;

if (num1 < num2)
{
    printf("%d is less than %d", num1, num2);

}
else if (num1 > num2)
{
    printf ("%d is greater than %d", num1, num2);

}
else 
{
    printf ("%d is equal to %d",num1,num2);
    
}
return (0);   
}