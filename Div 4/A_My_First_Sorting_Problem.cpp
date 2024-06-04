#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        int x, y;
        cin>>x;
        cin>>y;
        if(x < y){
            cout<<x<<" "<<y<<endl;
        }else{
            cout<<y<<" "<<x<<endl;
        }
    }
}