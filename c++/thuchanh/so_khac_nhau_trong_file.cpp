#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("DATA.in","r",stdin);
	int n;
    map <int,int> a;
    while(cin>>n){
        a[n]++;
    }
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
