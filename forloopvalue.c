#include<stdio.h>
// for loop valure take for user
int main () {
    int n;
    printf("Enter the value :");
    scanf("%d" , &n);

    for(int i = 0; i <= n; i++) {
        printf("%d\n" , i);
    }
}