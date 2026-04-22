#include<iostream>
using namespace std;

int main(){
    int selection;

    cout << "Please select the are of the shape to calculate" << endl;
    cout << " 1. Square \n 2. Rectangle \n 3. Triangle \n 4. Quitprogram" << endl;
    cout << "Enter selection "<< endl;
    cin >>  selection;

    while(selection < 1 && selection > 4){
        cout << "Your input was : " << selection << " which is an invalid input \n  Please enter a valid input!!!";
    }
    if(selection == 1){
        double side;
        cout<< "Side:  ";
        cin >> side;
        double AreaofSquare = side * side;
        cout<< "Area of a Square is: " << AreaofSquare;
    }
     else if(selection == 2){
        double length;
        double width;
        double AreaOfRectangle = length*width;
        cout << "length: ";
        cin >> length;
        cout << "width: ";
        cin >> width;
        cout << "Area of a Rectangle is: " << AreaOfRectangle;
     }
     else if(selection == 3){
         double length;
         double width;
         double AreaOfTriangle = 0.5*length*width;
         cout << "length: ";
         cin >> length;
         cout << "width: "; 
         cin >> width;
         cout << "Area of a Triangle is: " << AreaOfTriangle;
     }
     else if(selection == 4) {
        cout << "Quiting the program!";

     }

return 0;
}