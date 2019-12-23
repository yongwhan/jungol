#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cout<<"yard? ";
	double x; cin>>x;
	cout<<setprecision(1)<<fixed<<x<<"yard = "<<x*91.44<<"cm\n";
	return 0;
}
