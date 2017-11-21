#include <iostream>

using namespace std;

int main(){
	const int size = 10000;
	char str[size];
	int length = 0; 
	int max = 0;
	int start = 0;
	cin.get(str, size).get();
	
	//得到str的实际长度
	for(int i=0; i<size; i++){
		if(str[i] == '\0'){
			length = i;
			break;
		}
	}
	
	for(int i=0; i<length; i++){		
		int j = i-1, k = i+1;	
		while(j>=0 && k<=length && str[j] == str[k]){
			if(k-j+1 > max){
				max = k - j + 1;
				start = j;
			}
			j--; 
			k++;
		}
		j = i, k = i+1;	
		while(j>=0 && k<=length && str[j] == str[k]){
			if(k-j+1 > max){
				max = k - j + 1;
				start = j;
			}
			j--; 
			k++;
		}
	}
	
	cout << max << endl;
	if(max>0){
		for(int i=start; i<start+max; i++){
			cout << str[i];
		}
	}
	return 0;
}

