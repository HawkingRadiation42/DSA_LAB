#include<stdio.h>
int main(){
        int a[3][3] =  {{1,1,1},{2,2,2},{3,3,3}};
        int b[3][3] = {{1,1,1}, {2,2,2}, {3,3,3}};
        
        int m[3][3];
        
        for(int i = 0; i<3; i++){
                for(int j=0; j<3; j++){
                        m[i][j] = 0;
                        for(int k=0; k<3;k++){
                                m[i][j] = m[i][j]+(a[i][k]*b[k][j]);
                        }
                 }
            
        }
        for(int i = 0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("array[%d][%d] = %d\n", i, j, m[i][j]);
                
            }
        }
        return 0;
}

