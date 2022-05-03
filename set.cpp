#include<bits/stdc++.h>
using namespace std;


// only keys are there in sets.
// unique elements are stored in it , in sorted order
// types-> simple set , unordered set , multiset(used to much)

void print(set<string>&s){
    for(auto value: s){
        cout<<value<<endl;
    }
}

int main(){


set<string> s;

// inserting values in set
s.insert("abc");  // -> t.c o(logn) same as map
s.insert("cde");

//to acess an value of set we use find function and it return iterators.
set<string>::iterator it ;
it = s.find("abc");
 // if abc exists it will return iterator else if it doesn't exist it will return .end( ) iterator.
// if we have something in find that is not there in set and we are trying to access it we may get 
// segmentation fault , therefore keep a check as to whether we are not accessing end iterstor. 
/* 
if(it!=s.end())
{cout<<(*it)<<endl;}*/

// or creating iterator using auto method
//auto it = s.find("abc");

// printing set using iterator
for(it = s.begin() ; it!= s.end(); it++){
    cout<<(*it)<<endl;
}


// printing set using ranged based loop defined upper.

// ERASE FUNCTION -> it can take iterator and values both

auto i = s.find("abc");
if(i!=s.end())  // segmentation fault prevention as 
{s.erase(i) ; } // deletes abc from set
print(s);

// giving values to erase
s.erase("abc") ;
print(s);
    return 0;
}