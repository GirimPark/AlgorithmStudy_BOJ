//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<int> arr(n + 1);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &arr[i]);
//	vector<int> dp(n + 1);
//	dp[1] = arr[1];
//
//	for (int i = 2; i <= n; i++) {
//		if (arr[i] > dp[i - 1] + arr[i])
//			dp[i] = arr[i];
//		else
//			dp[i] = dp[i - 1] + arr[i];
//	}
//
//	int answer = *max_element(dp.begin() + 1, dp.end());
//	std::printf("%d", answer);
//	
//	return 0;
//}