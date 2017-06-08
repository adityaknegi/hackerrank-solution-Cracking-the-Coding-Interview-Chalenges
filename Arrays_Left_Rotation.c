#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
   int *b = malloc(sizeof(int) * n);

    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
     b[a_i]=a[a_i];
    }
    for(int a_i=0;a_i<n-k;a_i++){
        a[a_i]=b[a_i+k];
    }
    for(int a_i=0;a_i<k;a_i++){
        a[n-k+a_i]=b[a_i];
    }
    for(int a_i=0;a_i<n;a_i++){
        printf("%d ",a[a_i]);
    }
    free(a);
    free(b);
    return 0;
}

