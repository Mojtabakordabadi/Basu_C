#include <iostream>
using namespace std;

int main(){
    // number of digits
    int a;
	cin>>a;
	switch (a){
		case 0 ... 9:
			cout<<"1"; break;
		case 10 ... 99:
			cout<<"2"; break;
		case 100 ... 999:
			cout<<"3"; break;
		default:
			cout<<"Error";
	}
    return 0;
}