// #include<stdio.h>
// int main(){
//     int marks[5] ={99, 45, 78,56,78};
//     // int price[] = {45,78,56,79,85};
   

//     // printf("%d\n", marks[0]);
//     // printf("%d\n", marks[1]);
//     // printf("%d\n", marks[2]);
//     // printf("%d\n", marks[3]);
//     // printf("%d\n", marks[4]);
//     // printf("Marks:\n");
//     // for (int i = 0 ;i < 5;i++) {
//     //     printf("%d\n",marks[i]);
//     // }
 


//     return 0;

// }
#include <stdio.h>
int main() {
    int marks[5] = {99, 45, 78, 56, 78};

    // calculate array size
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("The size of the array is: %d\n", size);

    return 0;
}
