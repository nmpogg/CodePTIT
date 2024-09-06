#include <stdio.h>

int main(){
	int n ,i;
	scanf("%d", &n);
	int a[n], le[n], chan[n];
	int dem_le = 0, dem_chan = 0;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);	
		if(a[i] % 2 == 0){
			chan[dem_chan] = a[i];
			dem_chan++;
		}
		else{
			le[dem_le] = a[i];
			dem_le++;
		}	
	}
	for(i = 0; i < dem_chan; i++){
		printf("%d ", chan[i]);
	}
	
	printf("\n");
	for(i = 0; i < dem_le; i++){
		printf("%d ", le[i]);
	}
	
	return 0;
	
	
}
