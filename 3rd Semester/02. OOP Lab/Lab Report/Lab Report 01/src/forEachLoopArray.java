public class forEachLoopArray {
    public static void main(String[] args){
        int[] a = {10,20,30,40,50};
        int i = 0;
        for(int x : a){
            System.out.println("index[" + i +"] = " + x);
            i++;
        }
    }
}
