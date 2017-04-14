#include <bits/stdc++.h>
using namespace std;
#define INF 1987654321
#define P make_pair
typedef long long LL;

int main(){
	
	int t;
	scanf("%d",&t);
	for(;t--;){
		int n;
		scanf("%d",&n);
		int sum=0;
		for(int i=0;i<n;i++){
			int Max=0;
			for(int j=0;j<3;j++){
				int p;
				scanf("%d",&p);
				Max=max(p,Max);
			}
			sum+=Max;
		}
		printf("%d\n",sum);
	}
	
	
	
	
	return 0;
}
