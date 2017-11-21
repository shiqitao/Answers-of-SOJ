#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a<=0 || b<=0 || a>b){
        cout<<"error";
        return 0;
    }
    int flag = 0;
    for(int i=a;i<=b;i++){
        int atemp=i;
        int sum=0;
        while(atemp>0){
            sum += (atemp%10)*(atemp%10)*(atemp%10);
            atemp /= 10;
        }
        if(sum == i){
            cout<<i<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"no"<<endl;
    }
    return 0;
}
