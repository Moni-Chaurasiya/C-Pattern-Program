#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)  //number of line
    {
    for(int j=1;j<=n;j++)  //number of columns
    {
    printf("%d",j);
    }
    printf("\n");
    }
    return 0;
    
}