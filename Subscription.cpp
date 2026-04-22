#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(0,11);

    int daysUntilExpiration = dist(gen);
    cout << daysUntilExpiration << endl;
    if(daysUntilExpiration <= 10 && daysUntilExpiration > 5){
        cout << "Your subscription will expire soon. Renew Now!" << endl;
    }
    else if(daysUntilExpiration <= 5 && daysUntilExpiration > 1){
         cout << "Your subscription expires in " << daysUntilExpiration << "days" << "\n" << "Renew now and save 20%" << endl;
    }
    else if(daysUntilExpiration == 1){
        cout << "Your subscription expires within a day! \n Renew now and save 20%" << endl;
    }
    else if(daysUntilExpiration == 0){
         cout << "Your subscription has expired" << endl;
        }
    else{
        cout << "You have an active subscription" << endl;
    }

}