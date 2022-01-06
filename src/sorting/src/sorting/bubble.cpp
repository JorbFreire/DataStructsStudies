// // DONE!!
#include "../head.h"
using namespace std;
vector <unsigned> bubble(vector <unsigned> input){
    vector <unsigned> output;
    bool finish = true;
    
    while(finish == true){
        finish = false;
        for(int i = 0; i < (input.size()-1) ; i++)
            if(input[i+1] < input[i]){
                unsigned first = input[i];
                unsigned second = input[i+1];
                input[i] = second;
                input[i+1] = first;
                finish = 1;
            }
    }
    output = input;
    return output;
}
// O(n) = n + log(n)
