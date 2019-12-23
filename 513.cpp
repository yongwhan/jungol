#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double x=2.1, y=10.5;
	cout<<setprecision(1)<<fixed<<setfill(' ')<<setw(4)<<x<<"yd ="<<setfill(' ')<<setw(6)<<x*91.44<<"cm\n";
	cout<<setprecision(1)<<fixed<<setfill(' ')<<setw(4)<<y<<"in ="<<setfill(' ')<<setw(6)<<y*2.54<<"cm\n";
	return 0;
}
