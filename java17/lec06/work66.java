public class work66 {
    public static void main(String[] args) {
        Student66 p1 = new Student66();
	Student66 p2 = new Student66();

	p1.setData(800999,"若馬　大輔");
	p1.addCredits(45);
	p1.setHW(1.73,68.0);

        p1.show();

	p2.setData(900999,"入門　若葉");
        p2.addCredits(80);
	p2.setHW(1.58,49.0);

        p2.show();
    }
}
