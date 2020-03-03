class work86 {
    public static void main(String[] args) {
        Dimension86 r1 = new Dimension86(10, 20);
        r1.show();

        Dimension86 r2 = new Dimension86(30);
        r2.show();

        Dimension86 r3 = new Dimension86(123, 45);
        r3.show();

        System.out.println("2 番目の正方形のサイズを変更した後の表示");

        r2.setSize(50, 20);
        r1.show();
        r2.show();
        r3.show();
    }
}
