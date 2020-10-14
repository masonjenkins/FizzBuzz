#include <stdio.h>

void DoTest(int num);

int main(void)
{
    for(int i=1; i<101; i++)
    {
        DoTest(i);
    }
}

void DoTest(int num)
{
    if(num%3==0 && num%5==0)
    {
        printf("FizzBuzz\n");
    }
    else if(num%3==0)
    {
        printf("Fizz\n");
    }
    else if(num%5==0)
    {
        printf("Buzz\n");
    }
    else
    {
        printf("%d\n", num);
    }
}
    
