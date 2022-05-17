#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

int time;
cout << "What time it is?\n";
cin >> time;

if (time <= 11){
    printf("Good morning!\n");  
} else if (time > 13 && time < 18){
    printf("Good evening!\n");
} else if (time >= 19 && time <= 23){
    printf("Good night\n");
}else if (time == 00){
    printf("Midnigth\n");
}else{
    printf("introduce other value:\n");
}

return 0;
}

  
    


