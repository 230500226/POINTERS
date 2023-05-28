/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 04/05/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
// Write a function to reverse the element in the array below using pointers:
//int arr[] = {1, 2, 3, 4, 5};
void useReverse(int *arr, int n){
    int *ptr1 =arr;
    int *ptr2 = arr + n-1;

    while(ptr1<ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
}

int main(){

    int array[6] = {1,2,3,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);

    useReverse(array,n);

    printf("\n");

    for(int i =0; i<n; i++){
        printf("%d \n", array[i]);
    }

return 0;}