#include<stdio.h>
int main()
{
    int age;
    
    printf("enter the age of the person:\n");
    scanf("%d",&age);
    if(age>18)
    {
        printf("person is eligible");
    }
    else
    {
        printf("person is not eligible");
        
    }
    return 0;
}
