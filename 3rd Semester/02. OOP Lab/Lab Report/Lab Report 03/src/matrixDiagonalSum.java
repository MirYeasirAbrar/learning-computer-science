public class matrixDiagonalSum {
    public static void DiagonalSum(int[][] matrix){
    int pSum = 0, sSum = 0;
    int n = matrix.length;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) // Principle Diagonal
                pSum += matrix[i][j];
            if(i+j == n-1) // Secondary Diagonal
                sSum += matrix[i][j];
        }
    }
    System.out.println("Sum of Principle Diagonal " + pSum);
    System.out.println("Sum of Secondary Diagonal " + sSum);
    }
    public static void main(String[] args){
        int[][] matrix = {{2,4,5},{14,15,16},{33,56,78}};
        DiagonalSum(matrix);
    }
}
