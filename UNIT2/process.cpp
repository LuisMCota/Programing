#include <iostream>
 using namespace std;
int process (int n1, int n2);

int main(){
    int n1, n2;

    cout << "Enter two a possitive intergers: "; cin >> n1; cin >> n2;
    
    cout << "GCD of " << n1 << " and " << n2 << process(n1,n2);
    return 0;
}

int process(int n1, int n2){
    if (n2 != 0){
        return process(n2, n1 % n2);
    } else {
        return n1;
    }
    
}