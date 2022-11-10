
void merge(int *nums,int l,int m,int h){
    int i=l;
    int j=m+1;
    int k=0;
    int b[h+1];
    while(i<=m && j<=h){
        if(nums[i]<nums[j]){
            b[k]=nums[i];
            i=i+1;
            k=k+1;
        }
        else{
            b[k]=nums[j];
            j=j+1;
            k=k+1;
        }
    }
    if(i>m){
        for(int g=j;g<=h;g++){
            b[k]=nums[g];
            k++;
        }
    }
    else{
        for(int g=i;g<=m;g++){
            b[k]=nums[g];
            k++;
        }
    }
    k=0;
    for(int g=l;g<=h;g++){
        nums[g]=b[k];
        k++;
    }
}
void mergesort(int *nums,int l,int h){
    
    if(l<h){
       int mid=(l+h)/2;
        mergesort(nums,l,mid);
        mergesort(nums,(mid+1),h);
        merge(nums,l,mid,h);
    }
}
int * sortArray(int* nums, int numsSize, int* returnSize){
    *returnSize=numsSize;
    mergesort(nums,0,(numsSize-1));
   
   return nums;
     
    }


o/p:

    
