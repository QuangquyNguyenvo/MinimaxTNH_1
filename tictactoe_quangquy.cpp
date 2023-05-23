#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
char banco[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char play='X';
bool win_check=false, check335=false;
void start() {
	system("cls");
	cout<<" _______________________________________________________________________________"<<endl;Sleep(70);
	cout<<"|  888     d8b            888                        888                        |"<<endl;Sleep(70);
	cout<<"|  888     Y8P            888                        888                        |"<<endl;Sleep(70);
	cout<<"|  888888  888   .d8888   888888   8888b.    .d8888  888888   .d88b.    .d88b.  |"<<endl;Sleep(70);
	cout<<"|  888     888  d88P''    888         '88  bd88P''   888     d88''88b  d8P  Y8b |"<<endl;Sleep(70);
	cout<<"|  888     888  888       888     .d888888 888       888     888  888  88888888 |"<<endl;Sleep(70);
	cout<<"|  Y88b.   888  Y88b.     Y88b.   888  888 Y88b.     Y88b.   Y88..88P  Y8b.     |"<<endl;Sleep(70);
	cout<<"|   'Y888  888   'Y8888P   'Y888  'Y888888   'Y8888P  'Y888   'Y88P'    'Y8888' |"<<endl;Sleep(70);
	cout<<"|_______________________________________________________________________________|"<<endl;Sleep(70);
	Sleep(1000); system("cls");
	cout<<"LOADING"; Sleep(500); system("cls");
	cout<<"LOADING."; Sleep(500); system("cls");
	cout<<"LOADING. ."; Sleep(500); system("cls");
	cout<<"LOADING. . ."; Sleep(500); system("cls");
	cout<<"LOADING. . . ."; Sleep(500); system("cls");
	cout<<"DONE!"; Sleep(800); system("cls");
}
void draw() {
	system("cls");
	cout<<"	---------->Tic Tac Toe<----------"<<endl;
	cout<<"	Player - (X)	<->	Player 2 - (O)"<<endl;
	cout<<"	---------------------------------"<<endl;
	cout<<" _______________________________________________"<<endl;
	cout<<"|		|		|		|"<<endl;
	cout<<"| 	"<<banco[1]<<"	|"<<"	"<<banco[2]<<"	|"<<"	"<<banco[3]<<"	|"<<endl;
	cout<<"|_______________|_______________|_______________|"<<endl;
	cout<<"|		|		|		|"<<endl;
	cout<<"| 	"<<banco[4]<<"	|"<<"	"<<banco[5]<<"	|"<<"	"<<banco[6]<<"	|"<<endl;
	cout<<"|_______________|_______________|_______________|"<<endl;
	cout<<"|		|		|		|"<<endl;
	cout<<"| 	"<<banco[7]<<"	|"<<"	"<<banco[8]<<"	|"<<"	"<<banco[9]<<"	|"<<endl;
	cout<<"|_______________|_______________|_______________|"<<endl;
}
void nhap(){
	int vitri;
	loop:
	system("cls"); draw(); 
	cout<<"Nhap vi tri ban muon danh: "; cin>>vitri;
	if(banco[vitri]!='O'&&banco[vitri]!='X') {
		banco[vitri] = play;
	}
	else {
		system("cls");
		draw();
		cout<<"Vi tri nay da duoc danh, vui long chon vi tri khac!";
		Sleep(1000);
		goto loop;
	}
}
void doiluot() {
	//HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	if(play=='X') {
		//SetConsoleTextAttribute(console, 10);
		play='O';
	}
	else {
		//SetConsoleTextAttribute(console ,12);
		play='X';
	}
}
void w_check() {
	//check hang` ngang
	if(banco[1] == banco[2] && banco[2] == banco[3]) win_check=true;
	if(banco[4] == banco[5] && banco[5] == banco[6]) win_check=true;
	if(banco[7] == banco[8] && banco[8] == banco[9]) win_check=true;
	//check hang` doc
	if(banco[1] == banco[4] && banco[4] == banco[7]) win_check=true;
	if(banco[2] == banco[5] && banco[5] == banco[8]) win_check=true;
	if(banco[3] == banco[6] && banco[6] == banco[9]) win_check=true;
	//check hang` cheo'
	if(banco[1] == banco[5] && banco[5] == banco[9]) win_check=true;
	if(banco[3] == banco[5] && banco[5] == banco[7]) win_check=true;
	//355 cau giay
	for(int i=1;i<=9;i++) {
		if(banco[i]==' ') check335=false;
	}
	
	//thong bao end game
	if(play == 'O' && win_check==true) {
		system("color c"); cout<<"Nguoi choi X da chien thang!";
	}
	if(play == 'X' && win_check==true) {
		system("color a"); cout<<"Nguoi choi O da chien thang!";
	}
}

int main() {
	start();
	draw();
	while(true) {
		nhap();	
		draw();
		doiluot();
		//win check
		w_check(); if(win_check == true) break; if(check335 == true) break;
	}
	
	return 0;
}
