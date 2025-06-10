// #include <stdio.h>

// int fact(int num){
//     int f;
//     for(int i=num;i>=1;i--){
//         f=f*i;
//         return f;

//     }

    
    
// }
// int main(){
//     int P,N,R,v;
//     printf("Enter P:");
//     scanf("%d",&P);
//     printf("Enter N:");
//     scanf("%d",&N);
//     printf("Enter R:");
//     scanf("%d",&R);
//     v=fact(N)/fact(N-R);
//     printf("Value=%d",v);

//     return 0;

// }
#include <stdio.h>

int fact(int num) {
    int f = 1;
    for (int i = num; i >= 1; i--) {
        f = f * i;
    }
    return f;
}

int main() {
    int P, N, R, v;
    printf("Enter P: ");
    scanf("%d", &P);
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter R: ");
    scanf("%d", &R);

    if (R > N) {
        printf("R cannot be greater than N.\n");
        return 1;
    }

    v = P * fact(N) / (fact(R) * fact(N - R));
    printf("Value = %d\n", v);

    return 0;
}
