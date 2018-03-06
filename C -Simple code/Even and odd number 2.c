#include<stdio.h>
int main()
{
    int h,i;
    char n [100];
    scanf("%d",&h);
    for (i=1;i<=h;i++)
        {
        scanf("%d",&n);
        if (n[i]%2 == 0)
        {

        printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }
    return 0;

}
