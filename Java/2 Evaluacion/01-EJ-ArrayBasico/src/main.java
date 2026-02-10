public class main { // Standard convention: Class names start with Uppercase
    // Instance variables
    int[] nums;
    int arraySize = 50;

    // Constructor
    public main() {
        nums = new int[arraySize];
        int currentIndex = 0;

        for (int i = 0; i < 100 && currentIndex < nums.length; i++) {

            if (i % 2 != 0) { // If number is odd
                nums[currentIndex] = i;
                currentIndex++;
            }
        }
    }

    public static void main(String[] args) {
        main m = new main();
        // Print to verify
        for(int n : m.nums) {
            if (n != 0) System.out.print(n + " ");
        }
    }
}