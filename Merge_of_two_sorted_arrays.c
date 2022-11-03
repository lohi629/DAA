void merge(int *nums1,int size1,int m,int *nums2,int size2,int n){
    int b[(m+n)];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            b[k]=nums1[i];
            i=i+1;
            k=k+1;
        }
        else{
            b[k]=nums2[j];
            j=j+1;
            k=k+1;
        }
    }
    if(i>=m){
        for(int l=j;l<n;l++){
            b[k]=nums2[l];
            k=k+1;
        }
    }
    else{
        for(int l=i;l<m;l++){
            b[k]=nums1[l];
            k=k+1;
        }
    }
    for(int i=0;i<((m+n));i++){
        nums1[i]=b[i];
    }
    
}



output:
Your input
[1,2,3,0,0,0]
3
[2,5,6]
3
Output
[1,2,2,3,5,6]
Expected
[1,2,2,3,5,6]
