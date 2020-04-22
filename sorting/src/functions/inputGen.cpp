#include "../head.h"
using namespace std;
vector <unsigned> inputGen(){
    //input creator   **************
    int numGen[19] {4, 3, 2, 8, 19, 1, 6, 7, 5, 9, 10, 12, 13, 15, 16, 18, 17, 11, 14};
    vector <unsigned> input;
    
    for(int i = 0; i <= 18; i++ )
        input.push_back(numGen[i]); 
    // por alguma razão, ta vindo com um '0' extra no fim
    input.pop_back();     //Tira o '0' no final
    // esse 0 parece não sair depois no resultado
    
    cout << "input:      ";
    for(int i = 0; i <= input.size(); i++ )
        cout << input[i] << ", ";
    cout <<endl;

    return input;
}