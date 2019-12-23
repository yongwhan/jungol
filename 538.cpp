#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	int x=-1;
	while(1) {
		cout<<"number? "; cin>>x;
		if(x>0) cout<<"positive integer"<<endl;
		else if(x<0) cout<<"negative number"<<endl;
		else break;
	}
	return 0;
}
