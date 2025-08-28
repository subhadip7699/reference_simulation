#include <stdio.h>
int main(){
    int marks[5]= { 67,78,89,90,12};
    printf(" marks \n ");
    for(int i= 0 ;i < 5 ;i++){
        printf("array size :- %d \n ",marks[i]);
    }
    int size = sizeof(marks)/sizeof(marks[0]);
    printf("the size of array:- %d \n",size);

}