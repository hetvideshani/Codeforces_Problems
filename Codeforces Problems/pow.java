public class pow {
    public static void main(String[] args) {
        double x, y, n, z;

        n = 536870912;

        x = Math.log(n) / Math.log(2);

        y = Math.ceil(x);

        z = Math.floor(x);

        System.out.println(Math.round(x) + " " + Math.round(y) + " " + Math.round(z));
    }
}
