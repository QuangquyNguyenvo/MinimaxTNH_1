#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char banco[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char play='X';
bool win_check=false;
void draw() {
	system("cls");
	cout<<"	---------->Tic Tac Toe<----------"<<endl;
	cout<<"	Player - (X)	<->	Bot - (O)"<<endl;
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
	if(banco[1] != 1 && banco[2] != 2 && banco[3] != 3 && banco[4] != 4 && banco[5] != 5 && 
	banco[6] != 6 && banco[7] != 7 && banco[8] != 8 && banco[9] != 9 && win_check == false) {
		system("color d"); cout<<"Hai ben hoa` nhau!";
	}
	 
	//thong bao end game
	if(play == 'O' && win_check==true) {
		system("color c"); cout<<"Bot da chien thang!";
	}
	if(play == 'X' && win_check==true) {
		system("color a"); cout<<"Nguoi choi da chien thang!";
	}
}

int main() {
	draw();
	while(true) {
		nhap();	
		draw();
		doiluot();
		//win check
		w_check(); if(win_check == true) break;
	}
	
	return 0;
}
