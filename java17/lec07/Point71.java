class Point71 {
    private int x, y;

    void printInfo( ) {
        System.out.println("x 座標 = " + x);
        System.out.println("y 座標 = " + y);
    }

    void printInfo(String msg)  {
        System.out.println(msg);
        System.out.println("x 座標 = " + x);
        System.out.println("y 座標 = " + y);
    }

    void setPosition(int a, int b) { // 一般的な setPosition
        x = a; y = b;
    }

    // 追加されたメソッド（機能追加型。教科書 136 ページ）
    void printInfo(String left, String right) {
        System.out.println(left + x + ", " + y + right);
    }

    // 追加されたメソッド（機能限定型。教科書 136 ページ）
    void setPosition() {   // 特殊な setPosition
        setPosition(0, 0); // x = 0; y = 0; よりも良い
    }
}
