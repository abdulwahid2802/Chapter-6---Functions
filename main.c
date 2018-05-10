/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int n;

int comp(int guess)
{
    if(guess==n)
        return 1;
    else
    {
        if(guess<n)
            printf("%d<\n", guess);
        else
            printf("%d>\n", guess);
            
        return 0;
    }
}

int sum(int s1, int n)
{
    return s1+n;
}


void print1(int i)
{
    for(int j=1;j<i;j++) //equal to yoq
    {
        printf("%d*", j);
    }
}

void print2(int i)
{
    int fact=1;
    for(int j=1;j<=i;j++)
        fact*=j;
        
    printf("%d=%d\n", i, fact);
}

int main()
{
    /*int tries=0;
    int guess;
    scanf(" %d", &n);
    
    while(1)
    {
        scanf(" %d", &guess);
        tries++;
        if(comp(guess))
            break;
    }
    
    printf("%d", tries);*/
    
    /*int s=0;
    int temp;
    
    do
    {
        scanf(" %d", &temp);
        s=sum(s, temp);
        
    }while(temp);
    printf("%d", s);*/
    
    /*int s=0;
    int temp;
    
    do
    {
        scanf(" %d", &temp);
        if(temp>=1000 && temp <= 1500)
        break;
        s=sum(s, temp);
    }while(1);
    
    printf("%d", s);*/
    
    for(int i=2;i<=10;i++)
    {
        printf("%d!=", i);
        print1(i);
        print2(i);
    }

    return 0;
}
