class work83  {
    public static void main(String[] args) {
        Student83 p1 = new Student83(800999, "若馬　大輔");
        Student83 p2 = new Student83(900999, "入門　若葉",61);

        p1.addCredits(45);

        p1.show();
        p2.show();

        System.out.println("=========================");

        p1.addCredits(34);
        p1.show();

        p2.addCredits(-10);
        p2.show();
    }
}
