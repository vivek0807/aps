#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int TheNumber;
    scanf("%d",&TheNumber);
    int no;
    printf("Enter number of multiples\n");
    scanf("%d",&no);
    int multiples[no];
    bool found=false;

    for (int i = 0; i <no ; ++i) {
        printf("\nEnter\n");
        scanf("%d",&multiples[i]);
    }
    int arr[TheNumber+1];
    for (int i = 0; i <(TheNumber+1) ; ++i) {
            arr[i]=0;
    }
    int windowsize;
    int index=0;
    for (int j = 0; j < 3 ; j++) {
        windowsize=multiples[j];
            index=windowsize;
            printf("Window Size %d\n",windowsize);
        for (int i = 0; i < (TheNumber+1); ++i) {
            if((i%windowsize==0)){
                ++arr[i];
               // printf("Incrementi to 1 At %d %d\n",i,arr[i]);
                found=true;
            }
            else if (arr[i]==1 && found==false &&((i+windowsize)<=(TheNumber))){
                arr[windowsize+i]++;
                printf("New value at is %d at %d\n",arr[i+windowsize], i+windowsize);
            }
            found=false;
        }


    }


}