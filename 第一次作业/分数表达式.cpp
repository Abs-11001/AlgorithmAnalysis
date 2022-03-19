#include<iostream>
#include<math.h>
using  namespace std;

int main(){

    double m1,m2;
    cin>>m1>>m2;
    double i;
    double ans=0.0;
    int flag1=0,flag2=0;
    for(i =1.0;;i+=1.0){
        ans+=1.0*sqrt(i)/(i+1);
        // cout<<ans<<endl;
        if(!flag1&&ans>m1){
            flag1=i;
        }
        if(!flag2&&ans>m2&&flag1){
            flag2=i-1;
            break;
        }
    }
    cout<<flag1<<"<=n<="<<flag2;
    return 0;
}