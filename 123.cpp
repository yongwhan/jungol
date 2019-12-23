#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cout<<"Number? ";
	int n; cin>>n;
	if(n==1) cout<<"dog";
	else if(n==2) cout<<"cat";
	else if(n==3) cout<<"chick";
	else cout<<"I don't know.";
	cout<<"\n";
	return 0;
}
