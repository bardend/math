
#include<bits/stdc++.h>
using namespace std;
const int N=100;
bool criba[N];
int prim[N];
#define DBG(x) do {cerr << #x <<" = " << (x) << endl; } while (false)
#define RAYA do {cerr << "===========================" << endl; } while (false)

void generar_criba(){
    memset(criba,true,sizeof(criba));
    
    for(int i=2;i<=N;i+=2){
		prim[i]=2;		
        criba[i]=false;
	}
	
    for(int i=3;i*i<=N;i+=2){
        if(criba[i]){
		    for(int j=i*i;j<=N;j+=(2*i)){
		        criba[j]=false;
				prim[j]=i;
			}
        }
    } 
    for(int i=1;i<N;i++)
		if(criba[i]) //son los primos 
		prim[i]=i;

}
int main(){
    generar_criba();
	int t;
	cin>>t;
	
	
	while(t--){
		int ans=1;
		int x;
		cin>>x;
		while(x!=1){	
			int base=prim[x];			
			int cont=0;
			while(!(x%base)){
				cont++;
				x/=base;
			}
			ans*=(1+cont);
		}
		cout<<ans<<endl;
	}
	return 0;
}

