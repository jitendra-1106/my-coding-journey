#include <stdio.h>

int main(){
    int mul;
    int n=2;
    printf("The table of 2 is:\n");
    for(int i=1;i<=10;i++){
         mul=n*i;
        printf("%d\n",mul);
   
    }
    return 0;
}

/*
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}
*/