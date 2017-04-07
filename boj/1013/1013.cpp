#include <bits/stdc++.h>
using namespace std;
#define INF 1987654321
#define P make_pair
typedef long long LL;

char ans[2][4]={"NO","YES"};
bool CHK;

void chk(char arr[201],int n,int idx){
	if(idx==n) CHK=1;
	if(CHK) return ;
	printf("%d\n",idx);
	if(arr[idx]=='1'){
		if(idx+2<n && arr[idx+1]=='0' && arr[idx+2]=='0'){
			for(idx+=2;idx<n && arr[idx]=='0';idx++){}
			for(;idx<n && arr[idx]=='1';idx++){
				chk(arr,n,idx+1);
			}
			
		}
	}
	else{
		if(idx+1<n && arr[idx+1]=='1'){
			
			for(;idx+1<n && (arr[idx]=='0' && arr[idx+1]=='1');idx+=2){
				chk(arr,n,idx+2);
			}
		}
	}
}

int main(){
	
	int t;
	scanf("%d",&t);
	
	for(;t--;){
		char arr[201];
		scanf("%s",arr);
		int n=strlen(arr);
		
		int idx=0;
		CHK=0;
		chk(arr,n,0);
		printf("%s\n",ans[CHK]);
		
	}
	
	return 0;
}
