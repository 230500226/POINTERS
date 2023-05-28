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
// Write a program that creates an array of integers and initializes it with a set of values. Use a pointer to print the elements of the array in reverse order.
int main(){
    int array[6]={1,2,3,4,5,6};
    int MAX = sizeof(array)/sizeof(array[0]);
    int *arrayp = &array[MAX-1];
        
        for (int i = MAX; i>0; i--){
            printf("i = %d and array = %d \n",i , *arrayp);
            arrayp--;
        }
    // printf("MAX = %d\n", MAX);
return 0;}