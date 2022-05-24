#include <iostream>
using namespace std;

int main(){

    char name[20];
    int notes, total_averages;
    char option[10];
    
    
do{
    fflush(stdin);
    cout << "Name of the student: ";
    cin >> name;
    cout << "Total number of subjects for " << name << ": ";
    cin >> notes;
    
    double allnotes[notes];
    for (int i = 0; i < notes; i++){
        cout << "Grade " << i + 1 << ": ";
        cin >> allnotes[i];
        }

    double sum;
    for (int i = 0; i < notes; i++){
        sum = sum + allnotes[i];
        }
    

    double average = sum / notes;
    cout << "Promedio notas parciales of " << name << ": " << average << endl;

    cout << "Enter grades for more students yes/no? ";
    cin >> option;

    } while (option[0] == 'Y' || option[0] == 'y');
return 0;   

}

