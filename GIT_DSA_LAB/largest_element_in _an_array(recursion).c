#include<stdio.h>
int largest(int num[], int n, int max)  
{  
    if(n < 1)  
        return max;  
    else  
    {  
        if(num[n] > max)  
            max = num[n];  
  
        return largest(num, --n, max);  
    }  
}  
  
int main()  
{  
    int a[] = {23,28,3,4,2};  
    printf("largest element in the array: %d\n", largest(a, 4, a[0]));  
  
    return 0;  
}  











