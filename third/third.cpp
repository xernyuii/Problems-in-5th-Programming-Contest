#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    
    
    // int l=0;
//     int r=1000000;
    int l=0;
    int r=1000;
    
    while(l<r){
        int mid=(l+r)/2;
        printf("%d\n",mid);
        
        char a[10];
        scanf("%s",a);
        if(a[0]=='!'){
            r=mid-1;
        }
        else if(a[0]=='~'){
            l=mid+1;
        }
        else {
            break;
        }
    }
    
    
    
    return 0;
}