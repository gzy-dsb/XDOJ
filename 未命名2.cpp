#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int judge(int x,int *b,int n){
    int ret=-1;
    int i;
    for(i=0;i<n;i++){
        if (b[i]==x){
            ret=i;
            break;
        }
    }
    return ret;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    int *b=(int*)malloc((n-1)*sizeof(int));
    
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i>=1){
            b[i-1]=abs(a[i]-a[i-1]);
        }
    }

    int ret=1;
    for(i=1;i<=n-1;i++){
        if(judge(i,b,n-1)==-1){
            ret=0;
            break;
        }
    }

    if(ret==0){
        printf("Not jolly");
    }else{
        printf("Jolly");
    }

    return 0;
   
}
