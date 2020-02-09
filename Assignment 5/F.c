#include<stdio.h>
#include<stdlib.h>


int main()
{
    int m=4;
    // scanf("%d ",&m);
    int A[1000]={1,5,2,1};
    for(int i=0;i<m;i++)
    {
        // scanf("%d ",&A[i]);
    }
    //Sorting the array. (BUBBLE SORT)
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(A[j+1]<A[j])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    // We have a sorted array
    int per=1;
    int sum=1;
    printf("%d - %d \n",A[0],per);
    for(int i=1;i<m;i++)
    {
        if(A[i]>A[i-1])
            per++;
        printf("%d - %d \n",A[i],per);
        sum =sum+ per;
    }
    printf("%d",sum);
    return 0;
}