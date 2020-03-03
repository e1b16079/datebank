class Point82 {
    private int x = 1;
    private int y = 2;

    Point82() {
        x = 5; y = 10;
    }

    Point82(int a, int b) {
        x = a; y = b;
    }

    Point82(double a, double b) {
        x = (int)a; y = (int)b;
    }

    Point82(int a){
	x=a+5; y=a-5;
    }

    Point82(Point82 p1){
	x=p1.x; y=p1.y;
    }

    void printInfo(String name) {
        System.out.println(this.toString() + "\t"  +
                           name + ": " + "点(" + x + ", " + y + ")");
    }
}
