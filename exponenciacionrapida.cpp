#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define ss(s) scanf("%s",s)
#define str(x) strlen(x)
#define pb push_back
#define DBG(x) do {cerr << #x <<" = " << (x) << endl; } while (false)
#define RAYA do {cerr << "===========================" << endl; } while (false)
//#define DBG do { } while(false);
//#define RAYA do { }while(false);
#define F(i,n) for(int i=0;i<n;i++)
const int MOD=1e9+7;
const int N=1000005;
int frec[N];
int expo(int a,int b){
	int ret=1,aux=a;
	while(b){
		if(b&1)ret=ret*1LL*aux%MOD;
	
		aux=aux*1LL*aux%MOD;
		
		b>>=1;	
	}	
	return ret;
}
int main(){
	
	FAST;
	int t;
	cin>>t;
	while(t--){
	int base,exponente;
	cin>>base>>exponente;
	cout<<expo(base,exponente)<<endl;
	}
	return 0;}
