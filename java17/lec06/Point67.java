class Point67 {
    private int x, y;

    void setPosition(int a, int b) {
        x = a;
        y = b;
    }

    void printInfoShort( ) {
        System.out.println("点(" + x + ", " + y + ")");
    }

    void printInfoLong()  {
        System.out.println("x 座標 = " + x);
        System.out.println("y 座標 = " + y);
    }
}

