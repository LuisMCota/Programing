#include <iostream>

using namespace std;

int max(int x, int y, int z){
    if (x > y){
        return x;
    }else if (x > z){
        return z;
    }else{
        return y;
    }
    
}

int main(){
    int a = 10, b = 20, c = 30;
    cout << "The maximum value is: " << max(a,b,c) << endl;

return 0;
}