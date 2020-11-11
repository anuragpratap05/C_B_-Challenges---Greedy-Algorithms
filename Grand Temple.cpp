# C_B_-Challenges---Greedy-Algorithms
#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n;
	cin >> n;
	int x[n];
	int y[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x, x + n);
	sort(y, y + n);

	int max_x = INT_MIN;
	int max_y = INT_MIN;
	for (int i = 0; i < n - 1; i++)
	{
		max_x = max(max_x, abs(x[i] - x[i + 1]));
		max_y = max(max_y, abs(y[i] - y[i + 1]));

	}
	max_x = max_x - 1;
	max_y = max_y - 1;
	//cout << max_y << " " << max_x << endl;
	cout << max_x*max_y;

}
