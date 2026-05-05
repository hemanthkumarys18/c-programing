#include <iostream>
using namespace std;

int main() {
    // 1. Fixed the typo: 'signed_shot' changed to 'signed_short'
    unsigned short unshort_int = 56;
    signed short signed_short = -6; 
    
    int a = 99916543;
    long int long_int = 456789;
    
    // 2. Added 'LL' suffix to the long long literal to ensure it's treated correctly
    long long int ll_int = 9991654321LL;

    // Outputting sizes
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;  
    
    cout << "---" << endl;

    // Outputting values
    cout << "unsigned short int: " << unshort_int << endl;
    cout << "signed short int value: " << signed_short << endl;
    cout << "long int: " << long_int << endl;
    cout << "long long int value: " << ll_int << endl;
    cout << "a: " << a << endl;

    return 0;
}