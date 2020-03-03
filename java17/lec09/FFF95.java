// (1) FFF クラスは EEE クラスのサブクラス
class FFF95 extends EEE95             {
    protected double y = 0.0;

    FFF95(int x0, double y0) {
        // (2) スーパークラスのコンストラクタを使って、フィールド x の値を x0 にする
	super(x0);

        y = y0;
    }

    FFF95() {
        // (3) 自クラスのコンストラクタを使って、フィールド x と y を 10 と 3.14 にする
	this(10,3.14);
    }

    int methodA(int x) {
        return x;
    }

    double methodA(double y0) {
        return y + y0;
    }

    void methodB(int x) {
        // (4) EEE クラスの methodB を引数 x で呼び出す。
	super.methodB(x);

        System.out.println("FFF : y = " + y);
    }
}
