int helper(int s, int t) {
    if (s >= t) {
        return s - t;
    }
    return (t % 2 == 0) ? 1 + helper(s, t / 2) : 1 + helper(s, t + 1);
}

int brokenCalc(int startValue, int target) {
    return helper(startValue, target);    
}