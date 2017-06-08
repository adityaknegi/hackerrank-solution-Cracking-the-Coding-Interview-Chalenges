#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* a = (char *)malloc(512000* sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
    int* t = (int *)malloc(127 * sizeof(int));
    memset(t,0, (123)*sizeof(int));
    int* p = (int *)malloc(127 * sizeof(int));
    memset(p,0, (123)*sizeof(int));
    //Note that sizeof is calculated at compile time where as strlen is run time
    
    for(int i=0;i<strlen(a);i++)
        {
        t[a[i]]++;        //97 to 123
    }
    for(int i=0;i<strlen(b);i++)
        {
        p[b[i]]++;        //97 to 123
    }
    int q=0;
    for(int i=97;i<123;i++)
        {
        int j=t[i]-p[i];  //97 to 123
           

              
               if(j>0)
                   q=q+j;
               else
                 q=q-j;
              
    
    }
    
    printf("%d",q);
    free(a);
    free(b);
    free(p);
    free(t);
    
    
    
    
    
    
    
    
    return 0;
}

