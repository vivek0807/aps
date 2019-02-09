#include <stdio.h>
#include <String.h>
#include <math.h>
int main() {

    char data[]={'a','b','c'};
    int size=3;

    int data_size=pow(2,size);

    for(int i=0;i<data_size;i++){

        for(int j=0;j<size;j++){

            if(i &(1<<j)){
                //printf("Andopr--%d",(i &(1<<j)));
                printf("%c",data[j]);
            }
        }
        printf("\n");
    }
    return 0;
}