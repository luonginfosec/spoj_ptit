
#include<stdio.h>
#include<math.h>
int a[550] = {};
int n,isFinal;
void solve(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i==0){
		isFinal = 1;
	
	}
	else{
		a[i] = 1;
	}
}
int main(){
	isFinal = 0;
	scanf("%d",&n);
	while(!isFinal){
		for(int i = 1;  i<=n ; i++){
			printf("%d",a[i]);
		}
		printf("\n");
		solve();
	}
}
