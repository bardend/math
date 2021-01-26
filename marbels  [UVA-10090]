#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x,y,v1,w1,v2,w2,m1,m2;
ll p,q,r,s;        
ll bezout(ll a,ll b,ll& x_0,ll& y_0){
	if(b==0){
		x_0=1;
		y_0=0;
		return a;
	}
	ll x_1,y_1;
	ll g=bezout(b,a%b,x_1,y_1);
	x_0=y_1;
	y_0=x_1-(a/b)*y_1;
	return g;
}
bool call(){
		ll g,p1,p2,q1,q2;
		g=bezout(w1,w2,p1,p2);
        //n1 w1
        if(n%g)return false;
        q1=p1*n/g;
        q2=p2*n/g;
        ll d=ceil((-q1)*g/double(w2));
        ll u=floor(q2*g/(double)w1);
        if(d>u)
        	return false;
       p=q1+(w2/g*d);
       q=q2-(w1/g*d);
       r=q1+(w2/g*u);
       s=q2-(w1/g*u);
       ll cost1=v1*p+v2*q;
       ll cost2=v1*r+v2*s;
       if(cost1<cost2){
       	m1=p;
       	m2=q;
       }
       else{
        m1=r;
        m2=s;
       }
       return true;
}
int  main(){

    while(cin>>n,n){
        
        cin>>v1>>w1>>v2>>w2;
        if(call()){
        	            printf("%lld %lld\n",m1,m2);

        }
        
        else cout<<"failed\n";
    }
    return 0;
} 
