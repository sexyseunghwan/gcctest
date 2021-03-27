#include <stdio.h>

int main(){

    int cycle,result=0,num;
    char *answer;
    scanf("%d",&cycle);


    for (int i = 0; i < cycle; ++i){
        
        scanf("%d",&num);

        result ^= num;
    }

    if (cycle == 1) {
        answer = "koosaga";
    } else {
        if (result == 0) {
            answer = "cubelover";
        } else {
            answer = "koosaga";
        }
    }

    printf("%s",answer);

}