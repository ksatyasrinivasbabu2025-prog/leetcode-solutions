double new21Game(const int n, const int k, const int maxPts){
	if (n >= (k - 1) + maxPts || 0 == k){
		return 1.0;
	}

	double dp[1 + n];
	dp[0] = 1.0;

	double slidingWndSum = 1.0;
	for (int i = 1; i <= n; i += 1){
		dp[i] = slidingWndSum / maxPts;

		if (i < k){
			slidingWndSum += dp[i];
		}

		if (i - maxPts >= 0 && i - maxPts < k){
			slidingWndSum -= dp[i - maxPts];
		}
	}

	double probability = 0.0;
	for (int i = k; i <= n; i += 1){
		probability += dp[i];
	}
	return probability;
}