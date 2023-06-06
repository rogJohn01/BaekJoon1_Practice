import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line;
        while ((line = br.readLine()) != null && line.length() != 0) {
            int n = Integer.parseInt(line);
            check(n);
        }
    }

    public static void check(int n) {
        long x = 1;
        int digit = 1;
        while (x % n != 0) {
            x *= 10;
            x++;
            x %= n ; 
            digit++;
        }
        //System.out.println("x: "+x);

        System.out.println(digit);
    }
}
