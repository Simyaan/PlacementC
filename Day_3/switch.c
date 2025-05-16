#include <stdio.h>
#include <limits.h>
int main()
{
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("red");
        break;
        case 2:
        printf("blue");
        break;
        case 3:
        printf("yellow");
        break;
        default:
        printf("invalid");
        return 0;

    }

}