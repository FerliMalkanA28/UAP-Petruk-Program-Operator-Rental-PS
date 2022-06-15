// UAP Pemrograman Terstruktur
// Kelompok 3 :
// 1. Ferli Malkan Amien : 2117051050
// 2. Hamzah Hanif : 2117051032
// 3. Rafli Ashari Junaidi : 2117051067

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXQUEUE 20
#define MAXSTACK 50

using namespace std;

//===============================QUEUE QUEUE QUEUE==================================
int nomer[MAXQUEUE];
int head=-1;
int tail=-1;

bool IsEmptyQueue(){
  if(tail==-1){
       return true;
   }else{
       return false;
   }
}

bool IsFullQueue(){
   if(tail==MAXQUEUE-1){
       return true;
   }else{
       return false;
   }
}

void AntrianMasukQueue(int no){
    if (IsEmptyQueue()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}
//===============================QUEUE QUEUE QUEUE==================================

//===============================STACK STACK STACK==================================
int top = -1;
string Stack[MAXSTACK];

bool isFull_Stack(){
    if (top == MAXSTACK -1){
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty_Stack(){
    if (top == -1){
        return true;
    }
    else{
        return false;
    }
}


//================================STACK STACK STACK=================================
