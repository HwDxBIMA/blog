#include <iostream>
using namespace std;
 
int DtoB(int desimal){
	int sisa;
	if(desimal>1){
		DtoB(desimal/2);
	}
	sisa=desimal%2;
	cout << sisa << " ";
}
int main(){
	int desimal;
	cout << "input angka desimal : ";
	cin >> desimal;
	DtoB(desimal);
	return 0;
}

