#include "head.h"
using namespace std;
int main(){
    typedef vector <unsigned> (*SortingFunc) (vector <unsigned> input);
    vector <unsigned> input = inputGen();
    vector <unsigned> result;
    int algorithms_amount = 3;
    vector <SortingFunc> sorting {
        bubble,
        insertion,
        selection
    };
    string algorithm_name[sorting.size()] = {
        "bubble",
        "insertion",
        "selection"
    };
    //ta tirando o ultimo numero (não é um 0)
    for(int k = 0; k < sorting.size(); k++){
        result = sorting[k](input);
        cout << endl << algorithm_name[k]<< " = ";
        for(auto it:result)
            cout << it << ", ";
        cout << endl;
    }

}