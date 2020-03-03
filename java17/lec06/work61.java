public class work61 {
    public static void main(String[] args) {
        Student61 p1 = new Student61();
        Student61 p2 = new Student61();

        p1.id = 16079;
        p1.name = "Maeda Takeshi";
        p1.credits = 90;

        p2.id = 16080;
        p2.name = "Maeda Yusaku";
        p2.credits = 90;

        System.out.println("-------------------------");
        System.out.println(p1.id + " : " + p1.name + "(" + p1.credits + ")");

        System.out.println("-------------------------");
        System.out.println(p2.id + " : " + p2.name + "(" + p2.credits + ")");
    }
}
