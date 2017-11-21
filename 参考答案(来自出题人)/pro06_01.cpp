#include <iostream>

using namespace std;

int main(){
	int count_A = 0;
	int count = 0;
	bool flag = true;
	int n;
	char c;
	char A[80];

	cin >> n;
	
	while(count < 80){
		c = cin.get();
		if(c == '\n' || c == '\0') break;
		for(int i=0; i<count_A; i++){
			if(c == A[i]) {
				flag = false;
				break;
			}				
		}
		if(flag){
			if((c <= 122 && c >= 97)||(c <= 90 && c >= 65)||(c >= 48 && c<= 57)){
				A[count_A] = c;
				count_A++;
			}
		}
		count++;
		flag = true;
	}
	
	for(int i=0; i<count_A; i++){		
		c = A[i];
		//小写字母变大写
		if(c <= 122 && c >= 97){
			A[i] = c - 32;
		}else if(c <= 90 && c >= 65){
			//大写字母变小写
			A[i] = c + 32;
		}
	}
	
	//对A的ASCII码进行从大到小排序
	for(int i=0; i<count_A; i++){
		for(int j=i+1; j<count_A; j++){
			if(A[j] > A[i]){
				char temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
	
	while(n > 0){
		for(int i=0; i<count_A; i++){
			cout << A[i];
		}
		n--;
	}
	
	return 0;
}