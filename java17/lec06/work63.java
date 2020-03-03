public class work63 {
    public static void main(String[] args) {
        Student63 p1 = new Student63();
	Student63 p2 = new Student63();

        System.out.println("-------------------------");
        System.out.print(p1.id + " : " + p1.name + "(" + p1.credits+")");
	System.out.println("[" + p1.height + "," + p1.weight + "]");

        p1.id = 800999;
        p1.name = "若馬　大輔";
        p1.credits = 45;
	p1.height = 1.73;
	p1.weight = 68.0;

        System.out.println("-------------------------");
        System.out.print(p1.id + " : " + p1.name + "(" + p1.credits+")");
	System.out.println("[" + p1.height + "," + p1.weight + "]");

	p2.id = 900999;
        p2.name = "入門　若葉";
        p2.credits = 61;
	p2.height = 1.58;
	p2.weight = 49.0;

        System.out.println("-------------------------");
        System.out.print(p2.id + " : " + p2.name + "(" + p2.credits+")");
	System.out.println("[" + p2.height + "," + p2.weight + "]");

    }
}
