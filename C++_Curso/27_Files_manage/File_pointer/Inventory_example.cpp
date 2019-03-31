#include <iostream>
#include <fstream>
using namespace std;

class Inventory {

    public:
        void readData() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter cost: ";
            cin >> cost;
        }
        
        void displayData() {
            cout << "Name: " << name << endl;
            cout << "Cost: " << cost << endl;
        }
    
    private:
        char name[ 10 ], cost;
};


int main() {
    
    Inventory obj;
    cout << "ENTER DETAILS OF PRODUCTS " << endl;

    fstream file;
    file.open( "Stock.txt", ios::in | ios::app );

    obj.readData();
    file.write(( char * ) &obj, sizeof( obj ));
    
    file.seekg( 0 );

    file.read(( char * ) &obj, sizeof( obj ));
    obj.displayData();

    file.close();

    return 0;
}