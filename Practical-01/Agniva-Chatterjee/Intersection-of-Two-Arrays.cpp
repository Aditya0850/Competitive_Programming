#include <stdlib.h>
int* intersection(int* a, int n, int* b, int m, int* rs) { 
    int s[1001]={0}, *r=(int*)malloc(1001*sizeof(int)), k=0;
 
    for(int i=0;i<n;i++) s[a[i]]=1; 
    for(int i=0;i<m;i++) 
        if(s[b[i]]==1) r[k++]=b[i],s[b[i]]=2; 
 
    *rs=k; 
    return r; 
}