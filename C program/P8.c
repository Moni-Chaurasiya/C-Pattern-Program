#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) //number of line
    {
    int a=1;
    for(int j=1;j<=n;j++)
    {
    printf("%d",a);
    a=a+2;
    }
    printf("\n");
    }
    return 0;
    
}