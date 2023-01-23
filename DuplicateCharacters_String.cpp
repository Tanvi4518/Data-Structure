
#include <bits/stdc++.h>
using namespace std;

void findDuplicate(string str, int N)
{
	int first = 0;
  
	int second = 0;

	for (int i = 0; i < N; i++) {

		if (first & (1 << (str[i] - 'a'))) {
      
			second
				= second | (1 << (str[i] - 'a'));
		}
		else {

				= first | (1 << (str[i] - 'a'));
		}
	}

	for (int i = 0; i < 26; i++) {

		if ((first & (1 << i))
			&& (second & (1 << i))) {

			cout << char(i + 'a') << " ";
		}
	}
}

// Driver Code
int main()
{
	string str = "geeksforgeeks";
	int N = str.length();

	findDuplicate(str, N);
}
