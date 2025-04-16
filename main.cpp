/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vl_compra;
    bool desconto;
    
    cout << "Digite o valor da sua compra: " << endl;
    cin >> vl_compra;
    
    desconto = vl_compra >= 100;
    
    if(desconto == true){
        cout << "\n Você ganhou desconto" <<endl;
    }
    else{
         cout << "\n Você não ganhou desconto" <<endl;
    }
}