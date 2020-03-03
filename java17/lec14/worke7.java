class worke7 {
    public static void main(String[] args) {
        Car c1 = new Car("HNクーペ", 150);
        c1.display();
        c1.drive(1999);
        c1.display();
        c1.drive(1);
        c1.display();
        c1.drive(10000);
        c1.display();
        c1.drive(10000);
        c1.display();

        Bus c2 = new Bus("FUSOバス", 500);
        c2.display();
        c2.drive(1999, 99);
        c2.display();
        c2.drive(1, 1);
        c2.display();
        c2.drive(15000, 500);
        c2.display();
        c2.drive(15000, 600);
        c2.display();
    }
}
