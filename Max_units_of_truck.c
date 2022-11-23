void sort(int **boxType,int boxTypesSize,int *boxTypesColSize){
    int t,p;
    for(int i=0;i<boxTypesSize;i++){
        for(int j=i+1;j<boxTypesSize;j++){
            if(boxType[i][1]<boxType[j][1]){
                t=boxType[i][1];
                p=boxType[i][0];
                boxType[i][1]=boxType[j][1];
                boxType[i][0]=boxType[j][0];
                boxType[j][1]=t;
                boxType[j][0]=p;
            }
        }
        
    }
    
}
int maximumUnits(int** boxTypes, int b, int* bc, int truckSize){
int c=0;
    sort(boxTypes,b,bc);
    for(int i=0;i<b;i++){
        if(truckSize==0){
            break;
        }
        else if(boxTypes[i][0]<truckSize){
            c=c+(boxTypes[i][0]*boxTypes[i][1]);
            truckSize=truckSize-boxTypes[i][0];
        }
        else{
            c=c+(truckSize*boxTypes[i][1]);
            truckSize=0;
        }
    }
    
   return c; 

}


o/p:
Your input
[[5,10],[2,5],[4,7],[3,9]]
10
Output
91
Expected
91
