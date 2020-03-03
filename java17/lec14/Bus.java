// バスを表すクラス
class Bus extends Car {
    protected int passengers = 0; //累積乗客数

    // (1) ２引数のコンストラクタ：引数はString型のn、int型のk
    //   親クラスのコンストラクタを使って、
    //   引数nとkをフィールドnameとiniPriceで初期化する
    Bus(String n, int k) {
	super(n,k);
    }

    // (2) driveメソッド：戻り値はなし、引数はdouble型のdとint型のc
    //   引数dの距離を引数cの乗客を乗せて走る
    void drive(double d, int c) {
        // 引数cを乗客数passengersに加える
	passengers += c;

        // 引数dの距離を走行する
	super.drive(d);
    }

    // getPassengersメソッド：戻り値はint型、引数はなし
    //   乗客数passengersを返す
    int getPassengers() {
        return passengers;
    }

    // (3) changeメソッド：戻り値はなし、引数もなし
    //   走行距離と乗客数によって価格を更新する。一万人乗るごとに100万円価値が減る。切り下げ
    void change() {
        // 親クラスのchangeメソッドを使って、評価価格を更新する
	super.change();

        // 乗客数passengersを100で割った値を評価価格priceから引く
	price = price-(passengers/100);
        // priceを0未満の値にしない
        if (price < 0) price = 0;
    }

    // diplayAddtionalメソッド：戻り値はなし、引数もなし
    //   付加情報として乗客数を出力する
    void diplayAddtional() {
        System.out.format(" 乗客数 %4d", passengers);
    }
}
