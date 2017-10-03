#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char**args){
    
    FILE * f_in=fopen(args[1],"r");
    FILE * f_out=fopen(args[2],"r");
    FILE * f_user=fopen(args[3],"r");
    
    int T=1000;
    int target = 971387;
    int ret=1;
    while(T--){
        int s;
        fscanf(f_user,"%d",&s);
        if(s>target){
            fprintf(f_in,"!!!\n");
        }
        else if(s<target){
            fprintf(f_in,"~~~\n");
        }
        else{
            fprintf(f_in,"bingo\n");
            ret=0;
        }
    }
    
    
    
    return ret;
}