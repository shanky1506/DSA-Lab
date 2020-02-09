#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,k;
    scanf("%d %d", &m, &k);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d", &arr[i]);
    int count = 0;
    for(int i=0;i<m-2;i++)
    {
        for(int j=i+1;j<m-1;j++)
        {
            for(int p=j+1;p<m;p++)
            {
                if(arr[p] - arr[i] <= k)
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}