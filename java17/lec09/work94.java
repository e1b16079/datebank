class work94 {
    public static void main(String[] args) {
        AAA94 a1 = new AAA94();
        a1.setData(1.23);
        a1.infoAAA();

        System.out.println("------------------------------");

        BBB94 b1 = new BBB94();
        System.out.println(b1.msg);
        b1.setData(4.56);
        b1.setMsg("Sayonara");
        System.out.println("フィールドの値：" + b1.getX()
                           + ", " + b1.getMsg());
        b1.infoAAA();
        b1.infoBBB();
    }
}
