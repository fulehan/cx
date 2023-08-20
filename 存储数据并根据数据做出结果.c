/* #include<stdio.h>
int main()
{
    int index[24];
    int time;
    for (int i = 0; i < 24; i++)
    {
        scanf("%d", &index[i]);
    }
    while (scanf("%d",&time) == 1)
    {
        if (time<0||time>24)
            {
                break;
            }   
        
        if (index[time]>50)
        {
            printf("%d Yes\n",index[time]);
        }
        else
        {
            printf("%d No\n",index[time]);
        }
    }        
    
    return 0;
}
 */
#include <stdio.h>

int main() {
    int mood[24];
    
    for (int i = 0; i < 24; i++) {
        scanf("%d", &mood[i]);
    }

    int time;
    while (scanf("%d", &time) == 1 && time >= 0 && time <= 23) {
        if (mood[time] > 50) {
            printf("%d Yes\n", mood[time]);
        } else {
            printf("%d No\n", mood[time]);
        }
    }

    return 0;
}
