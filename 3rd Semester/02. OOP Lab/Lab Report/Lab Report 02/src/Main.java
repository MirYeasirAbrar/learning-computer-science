public class Main {
    public static void main(String[] args) {
        int[] a = {12, 5, 6, 8, 6, 4, 7, 10, 12};
        int index = 2, value = 20;
        for (int x : a) {
            System.out.print(x + " ");
        }
        System.out.print('\n');
        for (int i = a.length - 1; i > index; i--) {
            a[i] = a[i - 1];
        }
        a[index] = value;
        System.out.print("After insertion ");
        for (int x : a) {
            System.out.print(x + " ");
        }
        System.out.print('\n');
        // array reverse
        int temp;
        for (int i = 0; i < a.length / 2; i++) {
            temp = a[i];
            a[i] = a[a.length - 1 - i];
            a[a.length - 1 - i] = temp;
        }
        System.out.print("After Reverse ");
        for (int x : a) {
            System.out.print(x + " ");
        }
    }
}