public class linearSearch {
    public static void main(String[] args){
        int[] a = {10,20,30,40,50};
        int item = 40;
        int count = 0;
        boolean t = true;

        for(int x : a){
            if(x == item){
                t = false;
                break;
            }
        }
        //System.out.println((t) ? "Item Not Found :(" : "Item Found :)");
        if(t){
            System.out.println("Item Not Found :(");
        }
        else{
            System.out.println("Item Found :)");
        }
    }
}
