#include <iostream>

int n, X[100];
int count = 0;
void Init(void){
	std::cin >> n;
}

void results(void){
	++count;
	for(int i = 1; i <= n; i++){
		std::cout << X[i];
	}
	std::cout << " ";
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n) results();
		else Try(i+1);
	}
}

int main(){
	int t;
	std::cin >> t;
	while(t--){
		Init();
		Try(1);
		std::cout << std::endl;
	}
	return 0;
}
