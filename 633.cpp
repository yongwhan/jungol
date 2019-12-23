#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	int n;
	string lst[]={"Seoul", "Washington", "Tokyo", "Beijing"};
	while(1) {
		cout<<"1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ";
		cin>>n;
		if(n<1||n>4) {
			cout<<"\nnone\n";
			break;
		}
		cout<<"\n"<<lst[n-1]<<"\n\n";
	}
	return 0;
}
