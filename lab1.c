#include <stdio.h>

int main(){

    int size;//크기
    int stars, blank1, blank2;//별갯수, 빈칸1의갯수, 빈칸2의갯수  
    int i,j;//반복문 변수
    scanf("%d",&size);
    for(i=0;i<size;i++){
        for(j=0;j<size*2;j++){
            if(j==i||j==9-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }



    return 0;
}
