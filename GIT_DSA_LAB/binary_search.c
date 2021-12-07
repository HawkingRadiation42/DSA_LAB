#include<stdio.h>
int main(){
    int b, m, e, n;
    int a[]={1,2,3,4,5,6,7,8,9};
    printf("enter the number to be searched: ");
    scanf("%d", &n);
    e = 8;
    b = 0;
    m = (b+e)/2;
    while (b<=e){
        if(a[m]<n){
            b = m+1;
        }
        else if(a[m] == n){
            printf("%d found at the location %d\n", n, m+1);
            break;
        }
        else
            e = m - 1;
            m = (b+e)/2;
    }
    if (b>e){
            printf("not found %d in the list \n", n);
    }
    return 0;
}



