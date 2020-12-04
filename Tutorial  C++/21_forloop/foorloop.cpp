#include <iostream>

using namespace std;

int main()
{
	//for(inisialisasi, loop kondisi, increment){
	//	statement
	//}
	cout << "Loop 1 \n"; //increnment
	for(int i= 1; i <= 10; i++){
		cout << i << endl;
	}

	cout << "\n Loop 2 \n"; //assigment operator
	for(int i = 1; i <= 10; i += 2){ 
		cout << i << endl;
	}
	cout << "\n Loop 3 \n"; //decrement
	for(int i = 1; i >= -10; i-- ){
		cout << i << endl;
	}
	cout << "\n Loop 4 \n"; // compaon

	int total = 0;
	for(int i = 1; i <= 10; i++ ){
		total += i;
		cout << i << " || " << total << endl;
	}
	cout << "\n Loop 4 \n";

	int jumlah = 0;
	for(int i = 1; i <= 10; jumlah += i, i++ ){
			cout << i << " || " << jumlah << endl;

	}
	cin.get();
	return 0;
}
