#include<stdio.h>
#include<math.h>

int main()
{
    int l,r;
    scanf("%d %d",&l,&r);

    int i,j,cnt=0,judge;
    for(i=l;i<=r;i++){
        if(i>=2){
            judge=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                judge=0;
                break;
            }
            }
            if(judge==1){
                cnt+=1;
            }
        } 
    }
    printf("%d",cnt);
    return 0;
}
