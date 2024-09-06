#include <stdio.h>

int main(){
    float a1, b1, c1;
    float a2, b2, c2;
    float x, y;

    printf("Nhap he so cua phuowng trinh 1:\n");
    printf("a1 = ");
    scanf("%f", &a1);
    printf("b1 = ");
    scanf("%f", &b1);
    printf("c1 = ");
    scanf("%f", &c1);

    printf("Nhap he so cua phuong trinh 2:\n");
    printf("a2 = ");
    scanf("%f", &a2);
    printf("b2 = ");
    scanf("%f", &b2);
    printf("c2 = ");
    scanf("%f", &c2);

    // dinh thuc Jacobi
    float D = a1 * b2 - a2 * b1;
    float D1 = c1 * b2 - c2 * b1;
    float D2 = a1 * c2 - a2 * c1;
    
    if(D == 0){
        if(D1 == 0 && D2 == 0){
            printf("He phuong trinh co vo so nghiem\n");
        }
		else{
            printf("He phuong trinh vo nghiem\n");
        }
    }
	else{
        x = D1 / D;
        y = D2 / D;
        
        printf("Nghiem cua he phuong trinh la:\n");
        printf("x = %f\n", x);
        printf("y = %f\n", y);
    }

    return 0;
}

