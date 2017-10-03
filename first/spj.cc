#include <iostream>
#include <map>
#include <set>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char **argv){
    
    FILE * f_in=fopen(argv[1],"r");
    FILE * f_out=fopen(argv[2],"r");
    FILE * f_user=fopen(argv[3],"r");
    
    int ret = 0;
    int T;
    fscanf(f_in, "%d", &T);
    while(T--){
        map<pair<int, int>, int> M_in;
        map<pair<int, int>, int> M_user;
        int N;
        fscanf(f_in, "%d", &N);
        int tk;
        for(int i=0;i<N;i++){
            fscanf(f_in, "%d", &tk);
        }
        fscanf(f_in, "%d", &tk);
        //sample output
        for(int i=0;i<(1<<(N-1))-1;i++){
            int a,b;
            fscanf(f_out, "%d", &a);
            fscanf(f_out, "%d", &b);
            pair<int, int> c =make_pair(a,b);
            M_in[c]++;
        }
            
        // for(map<pair<int, int>, int>::iterator k=M_in.begin();k!=M_in.end();k++){
//             cout<<k->first.first<<" "<<k->first.second<<" "<<k->second<<endl;
//         }
//         cout<<"-------"<<endl;
//
        //user output
        
        for(int i=0;i<(1<<(N-1))-1;i++){
            int a,b;
            fscanf(f_user, "%d", &a);
            fscanf(f_user, "%d", &b);
            pair<int, int> c =make_pair(a,b);
            M_user[c]++;
        }
        
        // for(map<pair<int, int>, int>::iterator k=M_user.begin();k!=M_user.end();k++){
//             cout<<k->first.first<<" "<<k->first.second<<" "<<k->second<<endl;
//         }
//         cout<<endl;
        
        if(M_in.size()!=M_user.size()) ret=1;
        for(map<pair<int, int>, int>::iterator a=M_in.begin();a!=M_in.end();a++){
            if(a->second!=M_user[a->first]) ret=1;
        }

    }
    fclose(f_in);
    fclose(f_out);
    fclose(f_user);
    
    
    return ret;
}
