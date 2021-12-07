
#include<stdio.h>

int main(){
	int a[]={3,43,43,1,2};
	int n, biggest;
	biggest = a[0];
	for(int i=0; i<5; i++){
		if (a[i]>biggest){
			biggest = a[i];
		}
        }
	printf("%d ~ the biggest number in array", biggest);
        return 0;
}





















