#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,sum=0,ct=0;
	while(cin>>x) {
		sum+=x, ct++;
		if(x>=100) break;
	}
	cout<<sum<<"\n";
	cout<<setprecision(1)<<fixed<<double(sum)/ct<<"\n";
	return 0;
}
