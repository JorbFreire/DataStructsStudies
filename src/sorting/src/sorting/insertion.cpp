// // DONE!!
#include "../head.h"
using namespace std;
vector <unsigned> insertion (vector <unsigned> input){
    vector <unsigned> output;
    
    int it = 0;
    unsigned first;
    unsigned second;
    unsigned previous;
    while(input[it] > input[it+1]){
        first = input[it];
        second = input[it+1];
        input[it] = second;
        input[it+1] = first;
        int it2 = it;
        it++;
        while(input[it2] < input[it2-1] && it2 > 0){
            first = input[it2];
            previous = input[it2-1];
            input[it2] = previous;
            input[it2-1] = first;
            it2--;
        }
    }
        
    output = input;
    return output;
}
// O(n) = n + log(n)
