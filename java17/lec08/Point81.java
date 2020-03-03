class Point81 {
    private int x = 1;
    private int y = 2;

    Point81() {
        x = 5; y = 10;
    }

    Point81(int a, int b) {
        x = a; y = b;
    }

    Point81(double a, double b) {
        x = (int)a; y = (int)b;
    }

    void printInfo(String name) {
        System.out.println(this.toString() + "\t"  +
                           name + ": " + "点(" + x + ", " + y + ")");
    }
}
