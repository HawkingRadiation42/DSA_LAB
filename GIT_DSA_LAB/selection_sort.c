//selection sort
#include<stdio.h>

void selection(int a[]){
	int small;
	for(int i = 0; i<10;i++){
		small=i;
		for(int j=i+1;j<10;j++){
			if(a[small]>a[j])
				small=j;
		}

		int temp = a[small];
		a[small]=a[i];
		a[i]=temp;
	}
}


int main(){
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	selection(a);
	printf("the sorted list is: ");
	for (int i = 0; i < 10; i++)  
    	printf("%d ", a[i]);  
    return 0;

}

