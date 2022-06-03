#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int array[10][10];
void generate_random();
void repeat ();
void maxm();

int main(){
	generate_random();
	repeat();
	maxm();
	return 0;
}

void generate_random(){
	srand(time(0));
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			array[i][j] = rand() % 201;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << "\n";
		for(int j = 0; j < 10; j++){
			cout << setw (3)<<array[i][j] << "  ";
		}
	}
}

void repeat(){
	int maxf = 0;
	int mostf = -1;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			int freq = 0;
			
			for(int k = 0; k < 10; k++){
				for(int l = 0; l < 10; l++){
					if(array[i][j] == array[k][l]){
						freq++;
					}
				}
			}
			
			if(maxf < freq){
				maxf = freq;
				mostf = array[i][j];
			}
		}
	}
	
	
	cout<<"\n";
	cout << "\n The most repeated number is: " << mostf;

}

void maxm(){
	int max = -1;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(array [i][j] > max){
				max = array[i][j];
			}
		}
	}
	
	cout<< "\n";
	
	cout <<"\n The max number is: " << max << endl; 
}
