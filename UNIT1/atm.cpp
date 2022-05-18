#include <iostream>
using namespace std;

int main(){

    const string claveCorrecta = "UPY";
    cout << "Welcome to LMFC bank!\n";
    cout << "Ingrese la clave: ";
    string password = "";
    cin >> password;

    if (password != claveCorrecta){
        cout << "Correct key";
        return 0;
    }

    cout << "Correct key\nContinue\n";
    double balance = 1000; 
    string choose = "";

    while (choose != "3"){
        
        cout << "Available funds: " << balance << endl;
        cout << "1. Withdraw money\n2. Deposit\n3. Exit\n Select: ";
        cin >> choose;

        if (choose == "1"){
            double withdraw;
            cout << "Money to be withdrawn: " << endl;
            cin >> withdraw;

            if (withdraw > balance || withdraw <= 0){
                cout << "You cannot withdraw that amount!";
            }else{
                cout << "Operation completed!" << withdraw << endl;
                balance = balance - withdraw;
            }
        } else if (choose == "2"){
            double deposit;
            cout << "Money to deposit: " << endl;
            cin >> deposit;
            balance = balance + deposit;
            
        }else{
            cout << "Thank you for visiting us!" << endl;
        }
        
    }
    return 0;
}