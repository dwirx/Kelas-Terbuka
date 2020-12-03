#include <iostream>

using namespace std;

int main()
{
    // assignment 
    int a = 10;

    cout << "Nilai awal dari a adalah: " << a << endl;

    //a = a + 3;

    //assigment operator
    // variable = variable operator ekspresi
    //      a   =   a           -       3
    //variable operator= ekspresi
    //    a        +=      3

    a += 3;
    cout << "ditabah 3 menjadi " << a << endl;

    a -= 3;
    cout << "dikurangin 3 menjadi " << a << endl;

    
    a /= 3;
    cout << "dibagi 3 menjadi " << a << endl;

    a *= 3;
    cout << "dikali 3 menjadi " << a << endl;

    a %= 3;
    cout << "dimodulus 3 menjadi " << a << endl;

    cin.get();
    return 0;
}
