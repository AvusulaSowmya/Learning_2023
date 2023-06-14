#include<stdio.h>
int main()
{
    int n1,n2,Greater;
    printf("Enter the N1:\n");
    scanf("%d", &n1);
    printf("Enter the N2:\n");
    scanf("%d",&n2);
    Greater = n1>n2 ? n1 : n2;
    printf("Larger Number is %d",Greater);
    return 0;
}
