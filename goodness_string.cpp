#include <bits/stdc++.h>
using  namespace std;
int checkgoodness(string s, int size){
        if(size == 1){
                return 0;
        }
        int count = 0;
        int n = size/2;
        for(int i = 0; i<n; i++){
                if(s[i] != s[size-i-1]){
                        count++;
                }
        }
        return count;
}
int main(){
        int t;
        cin>>t;
        int n, k;
        for(int i=0; i<t; i++){
                cin>>n>>k;
                string str;
                cin>>str;
                int current_goodness = checkgoodness(str, n);
                if(current_goodness >= k){
                        cout<<"Case #"<<i+1<<": "<<0<<endl;
                }
                else{
                        cout<<"Case #"<<i+1<<": "<<k-current_goodness<<endl;
                }

        }
        return 0;
}
