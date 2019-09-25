#include<cstdio>
using namespace std;

int primes[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,
               43,47,53,59,61,67,71,73,79,83,89,97};

int main(){
    int n,value,counter,i;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        printf("%3d! =",n);
        for(i=0;i<25;i++){
            counter=0;
            value=primes[i];
            while(n/value){
                counter+=(n/value);
                value*=primes[i];
            }
            if(counter==0)
                break;
            if(i==15)
                printf("\n      ");
            printf("%3d",counter);
        }
        printf("\n");
    }
    return 0;
}