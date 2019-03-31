#include <iostream>
#include <iomanip>
 
using namespace std;

const int size = 100;
const int maximo = 9999, minimo = -9999;
const long SENTITEL = -99999;
 
enum Commands { READ = 10, WRITE , 
                LOAD = 20, STORE, 
                ADD = 30, SUBTRACT , DIVIDE , MULTIPLY, 
                BRANCH = 40, BRANCHNEG, BRANCHZERO, HALT};

void load( int * const );
void execute( int * const, int * const, int * const, int * const, int * const, int * const);  
void dump(const int *const, int, int, int, int, int);
bool validation( int );

int main(){
    int mem[ size ] = { 0 };
    int acc = 0, instCtr = 0, instReg = 0, optr = 0, oprd = 0;
    load( mem );
    execute( mem, &acc, &instCtr, &instReg, &optr, &oprd );
    dump(mem, acc, instCtr, instReg, optr, oprd);
    system( "pause" );
    cin.get();
    return 0;
}

// Validacion de datos
bool validation( int inst) {
    return inst >= minimo && inst <= maximo;}

// Entrada de instrucciones    
void load( int *const loadInstr) {
    long instruction;
    int i = 0;
    cout << "Enter your first instruccion: " << endl;
    cin >> instruction;
    while( instruction != SENTITEL ) {
        if (!validation( instruction ))
            cout << "Error. Please enter a valid number " << endl;
        else loadInstr[i++] = instruction;
        cin >> instruction;}}

// Ejecucion de instrucciones
void execute( int * const mem, int * const accPtr, int * const icPtr, int * const irPtr, int * const oprtPtr, int * const oprdPtr) {
    bool fatal = false;
    int temp;
    do {
        *irPtr = mem[ *icPtr ];
        *oprtPtr = *irPtr / 100;
        *oprdPtr = *irPtr % 100;
    
    switch( *oprtPtr ) {
        case READ:
            cout << "Enter a num: ";
            cin >> temp;
            while( !validation( temp )) {
                cout << "Error. Please enter a valir number: " << endl;
                cin >> temp;}
            mem[ *oprdPtr ] = temp;
            ++( *oprdPtr );
            break;
        
        case WRITE:
            cout << *oprdPtr << ":" << mem[ *oprdPtr ] << endl;
            ++( *icPtr );
            break;
        
        case LOAD:
            *accPtr = mem[ *oprdPtr ];
            ++( *icPtr );
            break;

        case STORE:
            mem[ *oprdPtr ] = *accPtr;
            ++( *icPtr );
            break;
        
        case ADD:
            temp = *accPtr + mem[ *oprdPtr ];
            ++( *icPtr );
            break;

        case SUBTRACT:
            temp = *accPtr - mem[ *oprdPtr ];
            ++( *icPtr );
            break;

        case DIVIDE:
            temp = *accPtr / mem[ *oprdPtr ];
            *accPtr = temp;
            ++( *icPtr );
            break;

        case MULTIPLY:
            temp = *accPtr * mem[ *oprdPtr ];
            ++( *icPtr );
            break;

        case BRANCH:
            *icPtr = *oprdPtr;
            break;

        case BRANCHNEG:
            *accPtr < 0 ? *icPtr = *oprdPtr : ++( *icPtr );
            break;
    
        case BRANCHZERO:
            *accPtr == 0 ? *icPtr = *oprdPtr : ++( *icPtr );
            break;

        case HALT:
            cout << "*** EXECUTE END ***\n";
            break; }} 

    while (*oprtPtr != HALT && !fatal);
    cout << "\n*********** END SIMPLETRON EXECTION****************\n";
 
}

   
