#include <iostream>
#include <vector>

using namespace std;

class Queue {
    public:
        vector <int> tasks;
        void alocateTask(int thisTask) {
            this->tasks.push_back(thisTask);
        };
        void dequeue(void){
            if(tasks.size() > 0){
                cout << tasks[0] << "executing next\n";
                for(int i = 0; i < tasks.size(); i++)
                    tasks[i] = tasks[i+1];
                tasks[tasks.size()] = 0; //must be dealocated
            }
                
        };
} thisQueue;
int main()
{
    thisQueue.alocateTask(11);
    thisQueue.alocateTask(12);
    thisQueue.alocateTask(13);
    thisQueue.alocateTask(14);
    thisQueue.alocateTask(15);
    thisQueue.dequeue();
    
    cout << "\n this it the Queue: \n";
    for(int i = 0; i < thisQueue.tasks.size(); i++)
        cout << thisQueue.tasks[i] << endl;
    return 0;
}