
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        set<char>st(s.begin(), s.end());
        //base case
        if(st.size() == 1){
            cout<<"NO"<<endl;
        }else{
            string s1 = s;
            sort(s1.begin(), s1.end());
            string s2 = s;
            sort(s2.rbegin(), s2.rend());
            cout<<"YES"<<endl;
            if(s1 != s){
                cout<<s1<<endl;
            }else{
                cout<<s2<<endl;
            }
        }
    }
    return 0;
}