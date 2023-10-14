#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1 = "anagram";
	string str2 = "grammar";
	int k = 2;
    int n = str1.length();
	if (str2.length() != n)
		return false;
	int freq[26] = {0};
	
	for (int i = 0; i < n; i++)
		freq[str1[i]-'a']++;  //storing the frequency of characters in first string
	int count = 0;

	for (int i = 0; i < str2.size(); i++)
		{
			if(freq[str2[i]-'a']>0){
				freq[str2[i]-'a']--;
			}
			else count++;
		}
	if (count<=k)
		cout << "Yes";
	else
		cout<< "No";
	return 0;
}