#include <iostream>
#include <cstdio>
using namespace std;

int solve(int n, int m) {
	if (n < m) return solve(m, n);
	else if (m==1) return  n;
	else if (m==2) {
		return (n/4)*4+((n%4>1)?2:n%4)*2;
	}
	else return (n*m+1)/2;
}

int main() {

    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    
	int r,c;
	while (scanf("%d%d", &r, &c)!=EOF) {
		printf("%d\n", solve(r, c));
	}
	return 0;
}