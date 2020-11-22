int main()
{
    cout << "Hello World" << endl;
    vector <unsigned> input;
    for(int i = 10; i > 0; i--)
        input.push_back(i);
        
    vector <unsigned> result = bubble(input);
    
    for(int i = 0; i <= result.size(); i++)
        cout << result[i] << ", ";
    cout << endl;
    
    return 0;
}