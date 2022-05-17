#include <iostream>
using namespace std;

int main(){

    int x,y = 20;
    int time = 20;

    x = (y < 10) ? 30:40;
    if(time < 18){
        cout<< "Good day.\n";
    }else{
        cout << "Good Evening\n";
    }

cout<< "value of x:" << x << endl;

return 0;
}