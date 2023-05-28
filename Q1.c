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
// Create a function that accepts an array and its length as parameters and returns the sum of the array elements using pointers. 
int useSum(int *arr, int length){
    int sum = 0;
    for (int i=0; i<length; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int array[6]={1,1,1,1,1,1};
    int length = 6;

    printf("The sum of the array values is %d",useSum(array, length));
    
return 0;}