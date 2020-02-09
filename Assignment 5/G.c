#include<stdio.h>

void PrintArray(int *A)
{
    int i=0;
    while(A[i] == 0 || A[i] == 1 )
    {
        printf("%d",A[i]);
        i++;
    }
    printf("\n");
}
int Value(int *A,int n)
{
    int p=0;
    int k =1;
    for(int i=0;i<n;i++)
    {
        if(A[n-i-1] == 1)
            p =p + k;
        k = k*2;      
    }   
    return p;
}

void generateAllBinaryStrings(int n, int *arr, int i,int l) 
{ 
	if (i == n) 
    { 
        int p=Value(arr,n);
        if((p&l) == l)
		    PrintArray(arr); 
		return; 
	} 
	// First assign "0" at ith position 
	// and try for all other permutations 
	// for remaining positions 
	arr[i] = 0; 
	generateAllBinaryStrings(n, arr, i + 1,l); 
	// And then assign "1" at ith position 
	// and try for all other permutations 
	// for remaining positions 
	arr[i] = 1; 
	generateAllBinaryStrings(n, arr, i + 1,l); 
}

int main(){
    int k = 3; // Length of the bit string
    int n = 2; // Number 
    
    // Print all binary strings 
    int p = k; 
	int arr[p]; 
	generateAllBinaryStrings(p, arr, 0,n);
}