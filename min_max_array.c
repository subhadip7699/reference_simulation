#include<stdio.h>
int main (){
    int size ;

    printf("Enter the size  of array:- ");
    scanf("%d",&size);

    int arr[size];

    // taking input from user 
    printf("Enter %d number :-", size);
    for(int i = 0; i < size;i++){
        scanf("%d/n",&arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 1; i < size;i++){
       if( arr[i] < smallest){
        smallest = arr[i];
       }
       if(arr[i] > largest){
        largest = arr[i];
       }

    }
    printf("smallest number = %d\n ",smallest);
    printf("lergest number = %d\n",largest);
}