class work91 {
    public static void main(String[] args) {
        Student91 p1 = new Student91();
        Student91 p2 = new Student91();
        Student91 p3 = new Student91();

        p1.setData(900846, "若馬　大輔");
        p1.setToeic(350);

        p2.setData(800135, "入門　若葉", 400);

        p3.setData(700666, "中尾　花子", 380);

        p1.addCredits(45);
        p2.addCredits(53);
        p3.addCredits(33);

        p1.show();
        p2.show();
        p3.show();

        System.out.println("==============================================");

        p1.setToeic(530);
        p2.setToeic(480);
        p3.setToeic(770);

        p1.addCredits(20);
        p2.addCredits(18);
        p3.addCredits(25);

        p1.show();
        p2.show();
        p3.show();

        System.out.println("==============================================");

        System.out.format("単位数 平均値: %.1f\n",
                          (p1.getCredits() + p2.getCredits() + p3.getCredits())/3.0);
        System.out.format("TOEIC  平均値: %.1f\n",
                          (p1.getToeic() + p2.getToeic() + p3.getToeic())/3.0);
    }
}
