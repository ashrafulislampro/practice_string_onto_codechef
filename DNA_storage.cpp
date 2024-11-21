#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str, str2 = "";
        cin>>n>>str;
        for(int i = 0; i <n; i+=2){
            if(str[i] == '0' && str[i+1] == '0'){
                str2+='A';
            }else if(str[i] == '0' && str[i+1] == '1'){
                str2+='T';
            }else if(str[i] == '1' && str[i+1] == '0'){
                str2+='C';
            }else if(str[i] == '1' && str[i+1] == '1'){
                str2+='G';
            }
        }
        cout<<str2<<endl;
    }
    return 0;
}