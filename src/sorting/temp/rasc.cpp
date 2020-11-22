/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
vector <unsigned> insertion (vector <unsigned> input){
    vector <unsigned> output;
    bool finish = true;
    
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
int main()
{
    cout << "Hello World" << endl;
    vector <unsigned> input;
    for(int i = 10; i > 0; i--)
        input.push_back(i);
        
    vector <unsigned> result = insertion(input);
    
    for(int i = 0; i <= result.size(); i++)
        cout << result[i] << ", ";
    cout << endl;
    
    return 0;
}
