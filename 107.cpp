#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double x=80.5,y=22.34;
	cout<<setprecision(2)<<fixed<<setfill(' ')<<setw(10)<<x<<setfill(' ')<<setw(10)<<y<<setfill(' ')<<setw(10)<<x+y<<"\n";
	return 0;
}
