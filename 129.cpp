#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

int main() {
	double b,h;
	char ch;
	while(1) {
		cout<<"Base = "; cin>>b;
		cout<<"Height = "; cin>>h;
		cout<<"Triangle width = "<<setprecision(1)<<fixed<<b*h/2<<"\n";
		cout<<"Continue? "; cin>>ch;
		if(tolower(ch)=='y') continue;
		break;
	}
	return 0;
}
