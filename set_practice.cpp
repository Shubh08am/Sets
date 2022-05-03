#include <bits/stdc++.h>
using namespace std;
int main(){
set<char>s;
string a;
cin>>a;

s.insert(a.begin(),a.end());
set<string>::iterator it ;
for(it = s.begin() ; it!= s.end(); it++){
    cout<<(*it)<<" ";
}
return 0;
}