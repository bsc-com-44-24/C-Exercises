#include<iostream>
using namespace std;

int main(){
    int T;

    cout <<"Enter an integer between 5 and 10 " << endl;
    cin >> T;
    
    while(T > 10 || T < 5){
        cout << "Sorry, you entered an invalid number, please try again " << endl;
        cin >> T;
    }
    cout << "Your input value " << T << " has been accepted.";
}