#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == b){
            printf("0\n");
        }
        else if(a > b){
            if((a - b) % 2 == 0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
        else{
            if((b - a) % 2 != 0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }


    return 0;
}
