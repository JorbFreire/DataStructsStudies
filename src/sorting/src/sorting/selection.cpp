// // DONE!!
#include "../head.h"
using namespace std;
vector <unsigned> selection(vector <unsigned> input){
    vector <unsigned> output;
    int count = 0;
    for(int begin = 0; begin <= input.size(); begin++ ){
        for(int next = begin; next <= input.size(); next++ )
            if(input[begin] > input[next]){
                int itbegin = input[begin];
                int itnext = input[next];
                input[begin] = itnext;
                input[next] = itbegin;
            }
    }
    
    output = input;
    return output;
}
// O(n) = n + log(n)
