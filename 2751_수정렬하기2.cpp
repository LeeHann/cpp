#include <bits/stdc++.h>
using namespace std;
int num[1000000];
int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++) cin>>num[i];
	sort(num, num+n);
	for (int i=0; i<n; i++) cout<<num[i]<<endl;
	return 0;
}
