//  FORMAT REQUIRED           // FLAG( arg 1 )          // BIT-FIELD ( arg 2)
//  Left justified output     // ios::left              // ios::adjustfield
//  Right justified output    // ios::right             // ios::adjustfield
//  Scientific notation       // ios::scientific        // ios::floatfield
//  Fixed point notation      // ios::fixed             // ios::floatfield
//  Decimal base              // ios::doc               // ios::basefield
//  Octal base                // ios::oct               // ios::basefield
//  Hexadecimal base          // ios::hex               // ios::basefield

#include <iostream>
using namespace std;

int main() {

    cout.setf( ios::hex, ios::basefield );
    cout << 123 << endl;

    return 0;
}