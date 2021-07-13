#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int t;
string s;
vector<int> stack;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		bool flag = true;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if(s[j] == '(')
			{
				stack.push_back('(');
			}
			else
			{
				if (stack.size() > 0)
					stack.pop_back();
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (stack.size() > 0)
		{
			flag = false;
			stack.clear();
		}

		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}