#include <bits/stdc++.h>
using namespace std;

int main(){
	string data;
	ifstream fileIn("PTIT.in", ios::in); // chu i  co the co hoac ko 
	ofstream fileOut("PTIT.out", ios::out); // chu o co the co hoac ko
	while(fileIn){
		getline(fileIn, data);
		fileOut << data;
		fileOut << endl;
	}
	fileIn.close();
	fileOut.close();
	return 0;
}
