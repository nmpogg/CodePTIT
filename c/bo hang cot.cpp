#include<stdio.h>
#define ll long long

int main(){
	ll t;
	scanf("%lld", &t);
	for(ll k = 1; k <= t; k++){
		ll n, m;
		scanf("%lld %lld", &n, &m);
		ll a[n+5][m+5];
		ll max = -1e9, Max = -1e9, h, c;
		for(ll i = 0; i < n; i++){
			ll s = 0;
			for(ll j  =0; j < m; j++){
				scanf("%lld", &a[i][j]);
				s += a[i][j];
			}
			if(s > max){
				max = s; 
				h = i;
			}
		}
		for(ll i = 0; i < m; i++){
			ll s = 0;
			for(ll j = 0; j < n; j++){
				if(j != h) s += a[j][i];
			}
			if(s > Max){
				Max = s;
				c = i;
			}
			
		}
		printf("Test %lld:\n", k);
		for(ll i = 0; i < n; i++){
			if(i != h){
				for(ll j = 0; j < m; j++){
					if(j != c){
						printf("%lld ", a[i][j]);
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}
