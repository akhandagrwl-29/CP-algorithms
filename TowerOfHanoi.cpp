#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define TC ll t;cin>>t; for(ll _ = 1;_ <=t;_ ++)
#define bs binary_search
#define pll pair<ll,ll>
#define ppll pair<ll,pll>
#define vvll vector<vector<ll>>
#define sll stack<ll>
#define qll queue<ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vc vector <char>
#define F first
#define S second
#define MOD 10e9 + 7
#define mxn 10e18
#define ln "\n"
#define print cout<<"Case #"<<_<<": "<<ans<<ln;

using namespace std;

ll cases = 0;

void towerofhanoi(ll n , char pres , char helper , char final)
{
	if(n == 0)
		return;
	// Recursive Case......

	towerofhanoi(n-1 , pres , final , helper );

	cout<<++cases<<". "<<"Putting from "<<pres<<" to "<<final<<ln;

	towerofhanoi(n-1 , helper , pres , final);
}


void solve()
{
	ll n;
	cin>>n;
	towerofhanoi(n , 'A' , 'B' , 'C');
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();
	return 0;
}
