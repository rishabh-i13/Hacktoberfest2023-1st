// check b is a subsequence of a,
// you are given two string a and b

#include<bits/stdc++.h>
using namespace std;

bool working(string a,string b){
    int i=0,j=0;
    int ct=0;
    while(i<a.size() and j<b.size()){
        if(a[i]==b[j]){
            i++;
            j++;
            ct++;
        }
        else{
            i++;
        }
    }
    if(b.size()==ct) return true;
    else return false;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<working(a,b)<<endl;
}
