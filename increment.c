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
const int MAX=3;

int main(){
    int var[] = {10,100,200};
    int i, *ptr;

        // the arrays address is now stored in the pointer *ptr
    ptr = var;

    for (i=0;i<MAX;i++){
        printf("Addess of var[%d] = %p\n",i,ptr);
        printf("Value of var[%d] = %d\n",i,*ptr);
        //moves pointer to the following memory address
        ptr++;
    }
return 0;}
