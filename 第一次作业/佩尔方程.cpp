#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int x,y;
    double n;
    double t;
    scanf("%lf",&n);
    int f=0;
    for(y=1;y<=10000000;y++){

        t=1.0+n*y*y;
        x=(int)sqrt(t);
        if((x<10000000)&&(1.0*x*x==t)){
            printf("x=%d\ny=%d\n",x,y);
            f=1;
            break;
        }


    }
    if(f==0)printf("no");
    return 0;
}