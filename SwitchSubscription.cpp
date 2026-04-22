#include <iostream>
#include <random>

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>dist(0,11);

    int daysUntilExpiration = dist(gen);
    cout << daysUntilExpiration << endl;

    switch(daysUntilExpiration)
    {
        case 0:
        cout << "Your subscription has expired" << endl;
        break;

        case 1:
        cout << "Your subscription expires within a day! \n Renew now and save 20%" << endl;
        break;

        case 2:
        case 3:
        case 4:
        case 5:
        cout << "Your subscription expires in " << daysUntilExpiration << "days" << "\n" << "Renew now and save 20%" << endl;
        break;

        case 6:
        case 7: 
        case 8:
        case 9:
        case 10:
        cout << "Your subscription will expire soon. Renew Now!" << endl;
        break;

        default:
        cout << "You have an active subscription" << endl;
        break;
    }

    return 0;
    
    }