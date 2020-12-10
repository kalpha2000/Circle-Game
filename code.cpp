#include<bits/stdc++.h>
using namespace std;
#define d               double
#define ll              long long
void solve(){
    // ashish moves first
    d k,D;
    cin>>D>>k;
    d x=0,y=0;
    while(1){
        //so that x,y remains on x=y line and breaks if out of circle is reached
        if(x>y && (y+k)*(y+k)+x*x<=D*D){
            y+=k;
        }
        else if(x<=y && (x+k)*(x+k)+y*y<=D*D){
            x+=k;
        }
        else{
            break;
        }
    }
    if(x==y)
        cout<<"Utkarsh";
    else
        cout<<"Ashish";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc-->0){
        solve();
        cout<<endl;
    }
    return 0;
}
