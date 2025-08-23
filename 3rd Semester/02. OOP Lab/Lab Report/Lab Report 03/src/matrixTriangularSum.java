public class matrixTriangularSum {
    public static void triangularSum(int[][] matrix){
        int upperSum = 0, lowerSum = 0;
        int n = matrix.length;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i <= j) // Upper Triangular Sum
                    upperSum += matrix[i][j];
                if(j <= i) // Lower Triangular Sum
                    lowerSum += matrix[i][j];
            }
        }
        System.out.println("Sum of Upper Triangular " + upperSum);
        System.out.println("Sum of Lower Triangular " + lowerSum);
    }
    public static void main(String[] args){
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9}};
        triangularSum(matrix);
    }
}
