void sort(int **events,int eventsSize,int *eventsColSize){
   int t,p;
    for(int i=0;i<eventsSize;i++){
        for(int j=i+1;j<eventsSize;j++){
            if(events[i][1]>events[j][1]){
                t=events[i][1];
                p=events[i][0];
                events[i][1]=events[j][1];
                events[i][0]=events[j][0];
                events[j][1]=t;
                events[j][0]=p;
            }
        }
       
    }
   
}
    

int maxEvents(int** e, int es, int* eventsColSize){
 
    sort(e,es,eventsColSize);
    int c = 0;
  int minday=0;
  int maxday=1;
  for(int i=0;i<es;i++){
      
      if(e[i][1]>=maxday){
          c=c+1;
           minday=minday+1;
      }
     
      maxday=maxday+1;
  }

    return c;

}
