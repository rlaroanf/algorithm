#include <bits/stdc++.h>
using namespace std;
#define INF 1987654321
#define P make_pair
typedef long long LL;

char arr[1000001];

int main(){
	
	scanf("%s",arr);
	int n=strlen(arr);
	
	int brr[2]={0};
	brr[0]=(arr[0]=='0');brr[1]=(arr[0]=='1');
	char rem=arr[0];
	for(int i=1;arr[i];i++){
		if(rem!=arr[i]){
			rem=arr[i];
			brr[arr[i]-'0']++;
		}
	}
	printf("%d",min(brr[0],brr[1]));
	return 0;
}
