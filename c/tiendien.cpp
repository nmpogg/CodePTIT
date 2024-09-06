#include <stdio.h>

int main(){
	int so_moi, so_cu;
	printf("So dien moi la : ");
	scanf("%d", &so_moi);
	printf("So dien cu la : ");
	scanf("%d", &so_cu);
	int so_dien = so_moi - so_cu, tien_dien;
	if(so_dien <= 100){
        tien_dien = so_dien * 1000;
    }
	else if(so_dien > 100 && so_dien <= 150){
        tien_dien = 100 * 1000 + (so_dien - 100) * 1200;
    }
	else if(so_dien > 150 && so_dien <= 200){
        tien_dien = 100 * 1000 + 50 * 1200 + (so_dien - 150) * 2000;
    }
	else{
        tien_dien = 100 * 1000 + 50 * 1200 + 50 * 2000 + (so_dien - 200) * 2500;
    }
    printf("So dien cu la : %d\n", so_cu);
    printf("So dien moi la : %d\n", so_moi);
    printf("So tien dien phai tra la : %d dong\n", tien_dien);
	return 0;
}
