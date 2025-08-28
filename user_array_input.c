#include<stdio.h>
int main(){
    int size ;
   printf("Enter your array size :- ");
   scanf("%d",&size);

   int arr[size];

   // take input user 
   printf("Enter %d number :- \n",size);
   for( int i = 0; i < size; i++){
    scanf("%d",&arr[i]);
   }
   printf("Your array number :-\n");
   for ( int i = 0 ; i < size; i++){
    printf("%d\n",arr[i]);
   }

return 0;

} 