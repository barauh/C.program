#include<stdio.h>
int main()
{
    int M,S;
    printf("Enter the precentage of the main subject:");
    scanf("%d",&M);
    printf("Enter the precentage of the subsidiary subject:");
    scanf("%d",&S);
    if(M>45&&S>=45)
    {
        printf("The student is passed");
    }
    else if(M>=45&&S>=55)
    {
        printf("The student is passed");
    }
    else if (M>=65&&S<=45)
    {
        printf("The student is allowed to reappear in B");
    }
    else
    {
        printf("The student is failed");
    }
    return 0;
}