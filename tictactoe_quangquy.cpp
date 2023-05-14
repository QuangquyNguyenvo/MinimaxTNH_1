#include<bits/stdc++.h>
using namespace std;
char banco[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void draw() {
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
int main() {
	draw();
	return 0;
}
