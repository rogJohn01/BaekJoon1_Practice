import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        Queue<Integer> q = new LinkedList<>();

        for (int i = 0; i < n; i++) {
            q.add(i + 1);
        }

        sb.append("<");
        while (q.size() > 1) {
            for (int i = 0; i < k - 1; i++) {
                q.add(q.poll());
            }
            sb.append(q.poll() + ", ");
        }
        sb.append(q.poll() + ">");
        System.out.print(sb);

        br.close();
    }
}
