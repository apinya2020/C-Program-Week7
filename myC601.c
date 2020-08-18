/*Program Name : program to Start
Author : Mr.Chhuchart Saetiew
Date : 8/18263
*/
#include<stdio.h>//Link section : from library stdio.h
void message();//Function prototype declaration section
void cat();//Function prototype declaration section

void main(){
    int animal=5;//Variable declaration
    printf("Hello World\n");//Executetable part
    printf("%i",animal);//Executetable part
    message();//Function call
    cat();//Function call
}

//Sub function : message
void message(){
    printf("We can take mor sub function\n");
}

//Sub function : cat
void cat(){
    printf("I Love My Cat\n");
}



