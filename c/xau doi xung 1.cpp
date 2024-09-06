#include <stdio.h>
#include <string.h>

int check1(char str[], int length){
    int leng = strlen(str);
    int i, j;

    for(i = 0, j = leng - 1; i < j; i++, j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}

int check2(char str[]) {
    int length = strlen(str);
    int i, j;

    for(i = 0, j = length - 1; i < j; i++, j--){
        if(str[i] != str[j]) {
            if(check1(str + i + 1, j - i - 1)){
                return 1; 
            } else{
                return 0;
            }
        }
    }
    return 0;
}

int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        char str[21];
        scanf("%s", str);

        if(check1(str,strlen(str))){
            printf("YES\n");
        } else if(check2(str)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    return 0;
}

