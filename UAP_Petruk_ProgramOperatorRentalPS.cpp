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
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}

bool IsFullQueue(){
   if(tail == MAXQUEUE-1){
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

void AntrianKeluarQueue(){
    if(IsEmptyQueue()){
        cout<<"Antrian sudah kosong ! ";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}

//===============================QUEUE QUEUE QUEUE==================================

//===============================STACK STACK STACK==================================
int top = -1;
string Stack[MAXSTACK];


//================================STACK STACK STACK=================================
