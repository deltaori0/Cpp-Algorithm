#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool is_anagram(string a, string b)
{
	vector<char> alphabets(26, 0);

	if (a.size() != b.size())
		return false;

	int length = a.size();
	for (int l = 0; l < length; l++)
	{
		alphabets[a[l]-97]++;
		alphabets[b[l]-97]--;
	}

	for (int i = 0; i < 26; i++)
	{
		if(alphabets[i] != 0)
			return false;
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int T;
	cin >> T;

	for(int t = 0; t < T; t++)
	{
		string a, b;
		cin >> a >> b;

		if (is_anagram(a, b))
			cout << a << " & " << b << " are anagrams.\n";
		else
			cout << a << " & " << b << " are NOT anagrams.\n";
	}

}