
public class Solution {

    public int maximumValue(String[] input) {
        int maxValue = 0;
        for (int i = 0; i < input.length; ++i) {
            try {
                int currentValue = Integer.parseInt(input[i]);
                maxValue = Math.max(currentValue, maxValue);
            } catch (NumberFormatException e) {
                maxValue = Math.max(input[i].length(), maxValue);
            }
        }
        return maxValue;
    }
}
