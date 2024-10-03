#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n =");
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        char flag='T';
        for(int j=2; j<i; j++)
        {
            if (i % j == 0)
            {
                flag = 'F';
                break;
            }
        }
        if(flag == 'T')
        {
            printf("%d\n", i);
        }
    }
    return 0;
}