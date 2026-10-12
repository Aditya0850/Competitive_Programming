void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int *arr,int low,int high){
    int pivot=arr[high];
    int i=low-1,j;
    for(j=low;j<high;j++){
    if(arr[j]<pivot || (arr[j]==pivot && (j&1))){ 
        i++;
        swap(&arr[i],&arr[j]);
    }
}
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void Quicksort(int *arr,int low,int high){
    if (low<high){
        int p=partition(arr,low,high);
        Quicksort(arr,low,p-1);
        Quicksort(arr,p+1,high);
    }
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    Quicksort(g,0,gSize-1);
    Quicksort(s,0,sSize-1);
    int child=0,cookie=0,count=0;
    while(child<gSize && cookie<sSize){
        if(s[cookie]>=g[child]){
            count++;
            child++;
        }
        cookie++;

    }
    return count;
}