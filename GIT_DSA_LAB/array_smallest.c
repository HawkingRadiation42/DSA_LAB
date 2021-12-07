#include<stdio.h>

int main(){
        int a[]={3,43,43,1,2};
        int n, smallest;
        smallest = a[0];
        for(int i=0; i<5; i++){
                if (a[i]<smallest){
                        smallest = a[i];
                }
        }
        printf("%d ~ the biggest number in array", smallest);
        return 0;
}


