#include <iostream>

using namespace std;

int main()
{
    // increment dan decrement
    // preincrement dan postincrement

    int a = 5;
    int b = 5;

    // postincrement
    cout << a << endl;
    cout << a++ << endl; //a = a +1;
    cout << a << endl;

    // preincrement
    cout << b << endl;
    ++b;
    cout << b << endl;
    

    cin.get();
    return 0;
}