#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int s=(x+y+z);
        if(x>=10&&y>=10&&z>=10&&s>=100){
            cout<<"pass"<<endl;
        }else{
            cout<<"fail"<<endl;
        }
    }
	// your code goes here
	return 0;
}
