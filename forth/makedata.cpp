#include<iostream>
using namespace std;

int main(){
    freopen("data.txt","w",stdout);
    int N=100;
    cout<<N<<"\n";
    for(int i=1;i<=100;i++){
        int p=rand()%10000000;
        int q=rand()%10000000;
        if(p!=q){
            cout<<min(p,q)<<" "<<max(p,q)<<" "<<rand()%1000000<<"\n";
        }
        else cout<<"1 2 1\n";

    }
    N=300000;
    cout<<N<<"\n";
    for(int i=1;i<=100000;i++){
        cout<<1<<" "<<9000000<<" "<<"1\n";
    }
    for(int i=1;i<=100000;i++){
        cout<<99<<" "<<9000000<<" "<<"1\n";
    }
    for(int i=1;i<=100000;i++){
        cout<<99999<<" "<<9000000<<" "<<"1\n";
    }
    
    
    return 0;
}