#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int n; 


long long merg(int a[],long long int start,long long int m,long long int end){
    
long long  int i,f,j;
    long long int p=0;
    f=start;
    int arr[end-start+1];
    memset(arr,0, (end-start+1)*sizeof(int));
   long long  int k=0;
     j=m+1;
for(i=f;i<=end;i++){
        
    if(a[f]>a[j]&&f<=m&&j<=end)
           {  
      
        p=p+m+1-f;
           
           }

    if(a[f]>a[j]&&f<m+1&&j<=end||f>m){
    arr[k++]=a[j];
            j++;
    }
    else{
    arr[k++]=a[f];
            f++;
        }
                 

                    }
           

    for(i=0;i<k;i++)
        a[start++]=arr[i];
         

    
 return p;   
}  

long long merge_sort(int a[],long long int start,long long int end){
   long long  int m,count=0;
    if(start<end){
        m=(start+end)/2;
        count=merge_sort(a,start,m);
        count+=merge_sort(a,m+1,end);
        count+=merg(a,start,m,end); 
    }
    return count;
}


int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        scanf("%lli",&n);
        int a[n];
    int i;
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);

     printf("%lli\n",  merge_sort(a,0,n-1));
        
   

       
        
    }
    return 0;
}

