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
		string WORD="";
		for(int i=0;i<n;i++){
			char p;
			scanf(" %c",&p);
			if(i==0) WORD+=p;
			else{
				if(WORD[0]>=p) WORD=p+WORD;
				else WORD=WORD+p;
			}
			
		}
		cout<<WORD<<'\n';
	}
	
	
	return 0;
}

