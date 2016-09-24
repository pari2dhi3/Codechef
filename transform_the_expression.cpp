#include<bits/stdc++.h>
using namespace std;
vector<char> vec;
int prece(char ch)
{
         if((ch==43)||(ch==45))
                 return 1;
         if((ch==42)||(ch==47))
                 return 2;
         if((ch==94))
                 return 3;
         else
                 return -1;
}
void infixtopostfix()
{
	stack<char> sta;
	int i;
	for(i=0;i<vec.size();i++)
	{
		if(vec[i]==40)
			sta.push(vec[i]);
		else if(vec[i]==41)
		{
			while(sta.top()!=40)
			{
				cout << sta.top();
				sta.pop();
			}
			sta.pop();
		}
		else if(vec[i]>=97&&vec[i]<=122)
		{
			cout << vec[i];
		}
		else if(vec[i]==42||vec[i]==43||vec[i]==45||vec[i]==47||vec[i]==94)
		{
			if(sta.empty())
				sta.push(vec[i]);
			else if(prece(vec[i])>prece(sta.top()))
			{
				sta.push(vec[i]);
			}
			else
			{
				while(prece(vec[i])>prece(sta.top()))
				{
					cout << sta.top();
					sta.pop();
				}
				sta.push(vec[i]);
			}
		}
	}
	while(!sta.empty())
	{
		cout << sta.top();
	        sta.pop();
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t,i;
	string p;
	cin >> t;
	while(t--)
	{
		cin >> p;
		for(i=0;i<p.size();i++)
			vec.push_back(p[i]);
		infixtopostfix();
		vec.clear();
		cout << "\n";
	}
	return 0;
}


