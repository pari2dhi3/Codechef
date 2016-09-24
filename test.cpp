#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int jc,sc,money;
	cin >> jc >> sc >> money;
	if((((money-jc)/sc)%2)==0)
		cout << "Lucky Chef\n";
	else
		cout << "Unlucky Chef\n";
	return 0;
}
