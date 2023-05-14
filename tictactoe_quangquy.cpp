#include<bits/stdc++.h>
using namespace std;
char banco[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void draw() {
	for(size_t i=0;i<3;i++) {
		for(size_t j=0;j<3;j++) {
			cout<<banco[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	draw();
	return 0;
}
