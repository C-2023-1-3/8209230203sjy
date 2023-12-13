
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cout << "Please input some text: ";
	getline(cin, str);

	transform(str.begin(), str.end(), str.begin(), ::tolower);  

	int cnt[256] = {};
	for (int i = 0; i < str.size(); i++) {
		cnt[(int)str[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] != 0) {
			cout << "the number of " << (char)i << ": " << cnt[i] << endl;
		}
	}
}




