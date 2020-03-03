class work95 {
    public static void main(String[] args) {
        EEE95 p1 = new EEE95(10);
        p1.methodB(20);

        System.out.println("-----------------");

        FFF95 q1 = new FFF95();
        q1.methodB(20);

        System.out.println("-----------------");

        FFF95 q2 = new FFF95(20, 2.71828);
        q2.methodB(30);
    }
}
