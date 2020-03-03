class work75 {
    public static void main(String[] args) {
        Hurrah75 h1 = new Hurrah75();
        h1.shout();
        h1.checkMsg();

        System.out.println("------------------------------");

        Hurrah75 h2 = new Hurrah75();
        h2.setData("Let's GO!", 5);
        h2.checkMsg();
        h2.shout();

        System.out.println("------------------------------");

        h1.shout("Boo!!", 3);
        h1.shout();
        h2.shout("GO!!", 4);
        h2.shout();

        System.out.println("------------------------------");

        h2.setData();
        h2.shout();
    }
}
