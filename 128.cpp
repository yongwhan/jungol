#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,ret=0;
	while(cin>>x) {
		if(!x) break;
		if(x%3==0||x%5==0) continue;
		ret++;
	}
	cout<<ret<<"\n";
	return 0;
}
