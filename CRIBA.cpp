#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
bool criba[N];
void generar_criba(){
    memset(criba,true,sizeof(criba));
    
    for(int i=2;i<=N;i+=2)
        criba[i]=false;
        
    for(int i=3;i*i<=N;i+=2){
        if(criba[i]){
            for(int j=i*i;j<=N;j+=(2*i))
                criba[j]=false;
        }
    }    
}
int main(){
    generar_criba();
    //true is primo
}
