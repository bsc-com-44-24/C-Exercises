#include<iostream>
#include <string>

using namespace std;

int main(){
    int numberOfElements = 0;

    int * numbers = nullptr;
    string * words = nullptr;
    
    cout << "How many things would you like to enter? ";
    cin >> numberOfElements;

    numbers = new int[numberOfElements];
    words = new string [numberOfElements];

        for(int i = 0; i < numberOfElements; i++){
            cout << "Enter the word: ";
            cin >> words[i];
        }

             for(int i = 0; i < numberOfElements; i++){
            cout << "Enter the number: ";
            cin >> numbers[i];
        }
        cout << "\nyou have entered:";

        for(int i = 0; i < numberOfElements; i++){
            cout << words[i] <<" " << numbers[i] <<" ";
        }
    
 delete[]words;
 delete[]numbers;

 return 0;

}