    int numGen[19] {4, 3, 2, 8, 19, 1, 6, 7, 5, 9, 10, 12, 13, 15, 16, 18, 17, 11, 14};
    vector <int> numbers;
    
    //input creator   **************
    cout << "numGen[]:   ";
    for(int i = 0; i <= 19; i++ )
        cout << "i[" << i << "] = " << numGen[i] << ", ";
    cout << endl;
    
    for(int i = 0; i <= 18; i++ )
        numbers.push_back(numGen[i]);
    
    cout << "input:      ";
    for(int i = 0; i <= numbers.size(); i++ )
        cout << numbers[i] << ", ";
    cout <<endl;