#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile("Tee.txt");
    string fileData;

    if(myFile.is_open()){
      getline(myFile, fileData);
      myFile.close();
    }
    else{
        cout << "unable to open file";
    }

    int vowels = 0;
    for(int i = 0; i < fileData.length(); i++){
        char c = tolower(fileData[i]);
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            vowels++;
            
        }
    }
    cout << "vowels: " << vowels << endl;

    int words = 0;
    if(fileData.length() > 0){
        words = 0;
        for(int i = 0; i < fileData.length(); i++){
            if(fileData[i] == ' '){
                words++;
            }
        }
    }
    cout << "words: " << words << endl;

    cout <<"Reverse: " ;
    for (int i = fileData.length() - 1; i >= 0; i--){
        cout << fileData[i];
    }
    cout << endl;

    string Captilization = fileData;
    if(Captilization.length() >= 2){
        Captilization[1] = toupper(Captilization[1]);
    }
    for(int i = 0; i < Captilization.length(); i++){
        if(Captilization[i] == ' ' && (i + 2) < Captilization.length() ){
            Captilization[i + 2] =toupper(Captilization[i + 2]);
        }
    }
    cout << "Captiliized: " << Captilization;

    return 0;
}