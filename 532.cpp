#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double x,y; cin>>x>>y;
	if(min(x,y)>=4.0) cout<<"A\n";
	else if(min(x,y)>=3.0) cout<<"B\n";
	else cout<<"C\n";
	return 0;
}
