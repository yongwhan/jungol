#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double x; cin>>x;
	if(x<=50.80) cout<<"Flyweight\n";
	else if(x<=61.23) cout<<"Lightweight\n";
	else if(x<=72.57) cout<<"Middleweight\n";
	else if(x<=88.45) cout<<"Cruiserweight\n";
	else cout<<"Heavyweight\n";
	return 0;
}
