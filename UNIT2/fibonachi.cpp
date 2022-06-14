#include <iostream>

using namespace std;

int fibo(int n){
    if (n <= 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int num;
    cout << "Enter the number: "; 
    cin >> num;

    for (int i; i < num; i++){
        cout << fibo(i) << " ";
    }
    return 0;
}