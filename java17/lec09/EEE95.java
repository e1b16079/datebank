class EEE95 {
    protected int x = 0;

    EEE95(int x) {
        // (1) 引数の値をフィールドに代入する
	this.x=x;

    }

    int methodA() {
        return x + 10;
    }

    double methodA(double y) {
        return 1 / x;
    }

    void methodB(int n) {
        System.out.println("EEE : n = " + n);
        System.out.println("EEE : x = " + x);
    }
}
