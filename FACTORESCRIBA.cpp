#include<bits/stdc++.h>
using namespace std;
const int N=100000;
bool criba[N];
int factor[N];
void generar_criba(){
    
    memset(criba,true,sizeof(criba));
    
    factor[2]=2;
    for(int i=4;i<=N;i+=2){
        criba[i]=false;
    	factor[i]=2;   
    }
    criba[3]=true;
    for(int i=3;i*i<=N;i+=2){
        if(criba[i]){
        	factor[i]=i;
            for(int j=i*i;j<=N;j+=(2*i)){
                criba[j]=false;
                factor[j]=i;
            }
        }
    }    
}
int main(){
    generar_criba();
    //true is primo
    int n;
    cin>>n;
    while(n!=1){
    	cout<<factor[n]<<"  ";
    	n=n/factor[n];
    }
	
}
