#include<stdio.h>

int main()
{

    int n, i, x, y;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&x,&y);

        int cnt = 0, sum = 0;

        // calculating sum of
        //sequence from x
        for(i=x; cnt<y; i++)
        {
            if(i%2!=0)
            {
                sum+=i;

                // counting odd numbers
                cnt++;
            }

        }
        printf("%d\n",sum);
    }

    return 0;
}

