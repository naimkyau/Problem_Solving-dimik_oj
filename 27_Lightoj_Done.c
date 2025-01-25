
// Armstrong Number

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for (int j = 0; j < t; j++) {
        
        int a, a1, a2, a3, b;
        scanf("%d",&a);
        a3 = a%10;
        a2 = ((a - a3)%100)/10;
        a1 = a/100;
        b = (a1*a1*a1)+(a2*a2*a2)+(a3*a3*a3);
        if (a == b)
        {
            printf("%d is an armstrong number!\n",a);
        }
        else
        {
            printf("%d is not an armstrong number!\n",a);
        }
    }
    return 0;
}