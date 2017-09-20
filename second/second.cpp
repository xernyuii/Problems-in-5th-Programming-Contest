#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        map<string, int>M;
        for(int i=0;i<N;i++){
            string a;
            cin>>a;
            for(int j=0;j<a.size();j++){
                if(a[j]>='A'&&a[j]<='Z'){
                    a[j]-='A'-'a';
                }
            }
            M[a]++;
        }
        for(map<string, int>::iterator i = M.begin(); i!=M.end(); i++){
            cout<<i->first<<" "<<i->second<<"\n";
        }
    }
    
    
    
    return 0;
}