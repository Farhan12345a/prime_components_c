//Farhan Shahbaz
//Logan

#include <stdio.h>

int main()
{
    int number;
    printf("What number would you like to find the prime factors for?\n");
    scanf("%d",&number);
    prime(number);
    return 0;
}

void prime(int n){
    int num = n;
    for(int i = 2; i < num; i++){
        while(num % i == 0){
            printf("%d\n", i);
            num /= i;
        }
    }
    if(num > 2){
        printf("%d\n", num);
    }
}
