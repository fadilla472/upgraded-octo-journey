public class ArrayMulti {
    public static void main(String[] args) {
        int[][] matriks = {{1, 2, 3}, {4, 5, 6}};

       for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 3; j++) {
                System.out.println("matriks[" + i + "][" + j + "] = " + matriks[i][j]);
            }
        }
    }
}
