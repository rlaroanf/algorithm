#include <bits/stdc++.h>
using namespace std;
#define INF 1987654321
#define P make_pair
typedef long long LL;

int n,m;
int arr[500][500];
int cache[500][500];
const int dx[]={1,0,-1,0};
const int dy[]={0,1,0,-1};

int solve(int i,int j){
	
	if(i==n-1 && j==m-1) return 1;
	//int& ret=cache[i][j][dir];
	int& ret=cache[i][j];
	if(ret!=-1) return ret;
	ret=0;
	
	for(int k=0;k<4;k++){
		int x=i+dx[k], y=j+dy[k];
		if((x>-1 && x<n) && (y>-1 && y<m)){
			if(arr[i][j]>arr[x][y]){
				ret+=solve(x,y);
			}
		}
	}
	
	return ret;
}

int main(){
	
	memset(cache,-1,sizeof(cache));
	
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
	
	printf("%d",solve(0,0));
	
	return 0;
}
