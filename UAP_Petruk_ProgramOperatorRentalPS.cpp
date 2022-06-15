// UAP Pemrograman Terstruktur
// Kelompok 3 :
// 1. Ferli Malkan Amien : 2117051050
// 2. Hamzah Hanif : 2117051032
// 3. Rafli Ashari Junaidi : 2117051067

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXQUEUE 50
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

void ClearQueue(){
     head=tail=-1;
}

void ViewQueue(){
    if(IsEmptyQueue()){
        cout<<"Antrian kosong ! ";

    }else {
        system("CLS");
	    head=0;
        for(head; head <=tail; head++){
            cout << "===============================";
            cout << "\n >> No. Antri : [" << head << "]";
            cout << "\n==============================="<< endl;
        }
    }
}
//===============================QUEUE QUEUE QUEUE==================================

//====================LOADING LOADING LOADING====================================

void loading(){
	int a;

for (a>=0; a<=100; a++){
      cout << "Loading " << a << "%" << endl;
      system("cls");
	}
}
//====================LOADING LOADING LOADING====================================

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

void push_Stack(){
    if (isFull_Stack()){
        cout << ">> Tumpukan ini sudah penuh !" << endl;
    }
    else {
        top++;
        cout << "Catatan : Gunakan '_' untuk mewakili spasi" << endl;
        cout << ">> Masukan Judul gamenya : ";
        cin  >> Stack[top];
        cout << "\nPada Tingkatan ke " << (top + 1) << endl;
        cout << "CD [" << Stack[top] << "] Telah Ditambah!" << endl;
    }
}

void pop_Stack(){
    if (isEmpty_Stack()){
        cout << ">> Tumpukan Kosong!" << endl;
    }
    else {
        cout << "\nCD [" << Stack[top] << "] pada tingkatan ke " << (top + 1) << " dalam tumpukan diambil!" << endl;
        top--;
    }
}

int clear_Stack(){
    return top = -1;
}

void Print_Stack(){
    if (isEmpty_Stack()){
        cout << "\tStack : " << endl;
        cout << "========================" << endl;
        cout << "\tEmpty! " << endl;
        cout << "========================" << endl;
    }
    else{
        cout << "\t\t Stack : " << endl;
        cout << "========================" << endl;

        for (int i = top; i >= 0; i--){
            cout << "XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
        }
        cout << "========================" << endl;
    }
}
//================================STACK STACK STACK=================================

//==================================MAIN MAIN MAIN==================================
int main(){
    int pilih, p=1, urut, ChooseSwitch, ChooseQueue, que=1, antrian;
	string game = "Belum ada game yang dipilih";

	do{
        system("CLS");
		cout << "===================================" << endl;
        cout << "|          Selamat Datang         |" << endl;
        cout << "|  di Program Operator Rental PS  |" << endl;
        cout << "|   Rental PS : Thomas Slebew     |" << endl;
        cout << "===================================" << endl;
        cout << "|1. List Game                     |" << endl;
        cout << "|2. Player                        |" << endl;
        cout << "|3. Exit                          |" << endl;
        cout << "===================================" << endl;
        cout << " Masukan Pilihan : " ; cin >> pilih;

        switch (pilih) {
	        case 1:
				system("CLS");
	            do {
	                cout << "==========================================" << endl;
	                cout << "|  Program Penyimpanan CD Playstation 2  |" << endl;
	                cout << "==========================================" << endl;
	                cout << endl;
	                Print_Stack();
	                cout << "\n1. Push";
	                cout << "\n2. Pop";
	                cout << "\n3. Clear";
	                cout << "\n4. Beranda";
	                cout << "\n\n>> Choose : ";
	                cin >> ChooseSwitch;
	
	                switch(ChooseSwitch){
	                    case 1:
	                        push_Stack();
	                        getche();
	                        break;
	                    case 2:
	                        pop_Stack();
	                        getche();
	                        break;
	                    case 3:
	                        clear_Stack();
	                        cout << "\nTumpukan CD Telah Berhasil Disingkirkan" << endl;
	                        getche();
	                        break;
	                    case 4:
				loading();
	                        cout << "Kembali ke Beranda " << endl;
	                        getche();
							pilih = 0;
	                        break;
	                    default :
	                        cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
	                        getche();
	                        break;
	                }
	                system("CLS");
	            } while (ChooseSwitch != 4);
	            break;
	            
	        case 2:
				do{
					system("CLS");
					cout << "===============================" << endl; 
					cout << "|  PROGRAM OPERATOR RENTAL PS |" << endl;
					cout << "===============================" << endl;
					cout << "|1. Tambah Antrian            |" << endl;
					cout << "|2. Panggil Antrian           |" << endl;
					cout << "|3. Lihat daftar antrian      |" << endl;
					cout << "|4. Format                    |" << endl;
					cout << "|5. Beranda                   |" << endl;
					cout << "===============================" << endl;
					cout << "Choose ! "; cin >> ChooseQueue;
					cout << "\n\n";
					if(ChooseQueue == 1){
						if(IsFullQueue()) {
							cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
						}
						else{
							urut=que;

							Print_Stack();

							cout << "Masukan pilihan game : "; cin >> game;

							AntrianMasukQueue(antrian);
							cout << "---------------------------------" << endl;
							cout << "|          NO. ANTRIAN          |" << endl;
							cout << "|               " << que << "               |" << endl;
							cout << "|Pilihan game : " << game << "  |" << endl;
							cout << "---------------------------------" << endl;
							cout << "|       Silahkan Mengantri      |" << endl;
							cout << "|      Menunggu " << tail << " Antrian       |" << endl;
							cout << "---------------------------------" << endl;
							p++;
							getche();
						}
					}
					else if(ChooseQueue == 2){
						cout << "=================================" << endl;
						cout << "No. Antri : [" << nomer[head] << "]";
						cout << "\n=================================" << endl;
						AntrianKeluarQueue();
						cout << "Silahkan Dipanggil !" << endl;
						getche();
					}
					else if(ChooseQueue == 3){
						ViewQueue();
						getche();
					}
					else if(ChooseQueue == 4){
						ClearQueue();
						cout<<"Antrian dikosongkan ! ";
						getche();
					}
					else if(ChooseQueue == 5){
						loading();
						cout << "Kembali ke beranda";
						pilih = 0;
					}
					else{
						cout << "Masukan anda salah ! \n"<< endl;
						getche();
					}
					getche();
				} while (ChooseQueue != 5);
				break;

			case 3:
				cout << "Terima Kasih telah menggunakan program ini";
				break;
					
			default :
				cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
				pilih = 0;
				getche();
				break;
		}
    }while (pilih != 3);
}

//==================================MAIN MAIN MAIN==================================
