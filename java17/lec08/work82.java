class work82 {
    public static void main(String[] args) {
        Point82 p1, p2, p3, p4, p5;

        p1 = new Point82();
        p1.printInfo("p1");

        p2 = new Point82(30,40);                   ;
        p2.printInfo("p2");

        p3 = new Point82(25.0,74.0);                      ;
        p3.printInfo("p3");

	p4 = new Point82(55);
	p4.printInfo("p4");

	p5 = new Point82(p3);
	p5.printInfo("p5");

	




    }
}
