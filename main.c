#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i,x,y,z,t,a,b,c,d;
    printf("Girdiginiz sifreyi yakala(4 haneli): ");
    scanf("%d",&k);
    t=k%10;
    k=k/10;
    z=k%10;
    k=k/10;
    y=k%10;
    k=k/10;
    x=k%10;
    i=0;
    int ayt;
    while(i<=9999){
        for(int j=i;j<=i;j++){
            int temp=j;
            d=temp%10;
            temp=temp/10;
            c=temp%10;
            temp=temp/10;
            b=temp%10;
            temp=temp/10;
            a=temp%10;
            if(d==t && c==z && b==y && a==x){
                printf("Sayiyi yakaladim: ");
                ayt=j;
                break;
            }
        }

        i++;

    }
    printf("%d",ayt);
    return 0;
}
