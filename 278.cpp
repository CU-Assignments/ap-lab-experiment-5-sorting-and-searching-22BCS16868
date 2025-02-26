public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1, right = n;

        while (left < right) {
            int mid = left + (right - left) / 2; // Avoids overflow
            if (isBadVersion(mid)) {
                right = mid; // Narrow search to left half
            } else {
                left = mid + 1; // Move to right half
            }
        }

        return left; // First bad version
    }
}

Input
n =
5
bad =
4
Output
4
Expected
4
