#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

//{"sites":[{"name":"XCOJ","url":"xcacm.hfut.edu.cn"},{"name":"Google","url":"www.google.com"},{"name":"Taobao" ,"url":"www.taobao.com"}]}

map<string,string> heap;

void parse(string js,int p,string ex){
    if(js[p]=="{"){
        string pre;
        for(int i=p+2;js[i]!='/"';i++){
            pre.push_back(js[i]);
        }
        
        
    }
    
    
}



int main(){
    
    int T;
    cin>>T;
    while(T--){
        heap.clear();
        string js;
        cin>>js;
        string ex;
        
        
        
        
        
        
    }
    
    
    
    return 0;
}