# C_B_-Challenges---Greedy-Algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n;
	cin >> n;
	int a[n];

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	int target = sum / n;
	int max_so_far = 0;
	int suma = 0;
	if (sum % n == 0)
	{
		for (int i = 0; i < n; i++)
		{
			int needed = (i + 1) * target;
			suma += a[i];
			max_so_far = max(max_so_far, abs(needed - suma));

		}
		cout << max_so_far<<endl;
	}
	else
	{
		cout << "-1"<<endl;
	}


}
