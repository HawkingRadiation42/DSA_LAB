#include <stdio.h>
void main(){
    int j, temp;
    int a[10] = {9,3,4,5,6,7,8,2};
 
    for (int i = 1 ; i <8; i++){
	    j = i;
            while ( j > 0 && a[j-1] > a[j]){	        
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", a[i]);
    }
}



