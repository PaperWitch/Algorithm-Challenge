#include<stdio.h>
int main()
{
    int num, i, count=0;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    if(num==1)
        count=1;
    else{
    for(i=2; i<num; ++i)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    }
        if(count==0)
            printf("Prime number\n");
        else
            printf("Not a prime number\n");

    return 0;
}
