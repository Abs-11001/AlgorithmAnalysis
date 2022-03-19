#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
double fc(double x)
{
    return 2*pow(x,2)*pow(sin(x),7)+3*pow(x,0.5)*cos(x)-exp(x)/5;
}
int main()
{
    double length=0.1,a,b,temp=0.0,i,x1;

    cin>>a>>b;

    for(i=a;i<b;i=i+length)
    {
        if(fc(i)*fc(b)<0)
        {	temp=1;
            break;
        }
    }
    if(temp==0)
    {	cout<<"no"<<endl;
        return 0;
    }
    else if(temp==1)
    {
        length=0.1;
        double x,y;
        int k=1;
        double min=100.0;
        while(k<=8)
        {
            for(x=a;x<=b;x+=length)
            {
                y=fc(x);
                if(fabs(y)<min)
                {
                    x1=x; min=fabs(y);
                }
            }
            length=length/10*1.0;
            a=x1-length*5.0;
            b=x1+length*5.0;
            k++;
        }
    }
    printf("%.8lf\n",x1);
    return 0;
}
