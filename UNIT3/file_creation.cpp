#include <iostream>
#include <fstream>

using namespace std;


int main(){
    fstream new_file;
    new_file.open("new_file_write.txt", ios::out);

    if(!new_file){
        cout << "No such file";
        }else{
            cout << "New file created";
            new_file << "Learning File Handling";
            new_file.close();
        
        
              
    }
        
    return 0;
}
