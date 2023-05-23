#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
char banco[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char play='X';
bool win_check=false, check335=false;
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
	cout<<"Nhap vi tri ban muon danh: "; cin>>vitri;
	if(banco[vitri]!='O'&&banco[vitri]!='X') {
		banco[vitri] = play;
	}
}
void doiluot() {
	if(play=='X') play='O';
	else play='X';
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
