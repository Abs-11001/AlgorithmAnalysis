#include<iostream>
#include<math.h>
int a,b,c,d,e,f,k,t,n,x,y,z,m[7],g[11];

int main()
{

    scanf("%d",&f);
    for(a=2;a<=9;a++)
        for(b=2;b<=9;b++)
            for(c=2;c<=9;c++)
                for(d=102;d<=987;d++)
                    for(e=2;e<=9;e++)
                    {
                        for(t=1,k=1;k<=b;k++)
                            t=t*a;
                        z=(d*e+f-t)*c;
                        if(z<10 || z>98)
                            continue;
                        m[1]=a;
                        m[2]=b;
                        m[3]=c;
                        m[4]=d;
                        m[5]=e;
                        m[6]=z;
                        for(x=0;x<=9;x++)
                            g[x]=0;
                        g[f]=1;
                        for(k=1;k<=6;k++)
                        {
                            y=m[k];
                            while(y>0)
                            {
                                x=y%10;
                                g[x]++;
                                y=y/10;
                            }
                        }
                        for(t=0,x=0;x<=9;x++)
                            if(g[x]!=1)
                            {
                                t=1;
                                break;
                            }
                        if(t==0)
                        {
                            n++;
                        }
                    }
    printf("%d",n);
}
