#include<stdio.h>
int isPrime(int, int);

int main()
{
    int num, prime;
    num=456;
    printf("Enter number: 456\n");
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("\%d is not a prime number\n", num);
    }
    return 0;
}

int isPrime(int n, int i)
{
    if(i == 1)
        return 1;
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);
    }
}
