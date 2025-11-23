#include<stdio.h>
#include<stdlib.h>

int main(){
    int M,N;
    scanf("%d %d",&N,&M);
    int *a=(int*)malloc(N*sizeof(int));

    int i,j,sum=0;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    int AM=a[M-1];

    int t;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    float result;
    if(AM>=a[N-1]){
        result=(sum-a[0])/(float)(N-1);
    }else if(AM<=a[0]){
        result=(sum-a[N-1])/(float)(N-1);
    }else{
        result=(sum-a[0]-a[N-1])/(float)(N-2);
    }

    printf("%.2f",result);
    return 0;
}
