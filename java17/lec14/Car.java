//車を表すクラス
class Car {
    protected String name;      // 車の名前
    protected int iniPrice;     // 購入価格
    protected int price;        // 評価価格
    protected int mileage = 0;  // 走行距離    (単位はkm)

    // (1) ２引数のコンストラクタ：引数はString型のn、int型のk
    //   引数nとkをフィールドnameとiniPriceに代入する。引数kをpriceにも代入する
    Car(String n, int k) {
        // 引数nとkをフィールドnameとiniPriceに代入する
	name= n;
	iniPrice = k;


        // 引数kをpriceに代入する
	price = k;
    }

    // getPriceメソッド：戻り値はint型、引数なし
    //   評価価格priceを返す
    int getPrice() {
        return price;
    }

    // (2) driveメソッド：戻り値はなし、引数はdouble型のd
    //   引数dの距離を走らせ、評価価格を更新する
    void drive(double d) {
        // 引数dを走行距離mileageに加える
	mileage = mileage+(int)d;

        // changeメソッドを呼び評価価格を更新する
	change();
    }

    // (3) driveメソッド：戻り値はなし、引数もなし
    //   距離1000(km)を走らせる
    void drive() {
	drive(1000);
    }

    // (4) changeメソッド：戻り値はなし、引数もなし
    //   走行距離によって評価価格を更新する。つまり価値がだんだん下がる
    void change() {
        // mileageを2000で割った値をiniPriceから引いた値をpriceに代入する
	price= iniPrice-(mileage/2000);

        // priceを0未満の値にしない
        if (price < 0) price = 0;
    }

    // displayメソッド：戻り値はなし、引数もなし
    //   名前、評価価格、走行距離を出力する
    void display() {
        System.out.format("名前 %s 評価価格 %3d 走行距離 %5d", name, getPrice(), mileage);

        // diplayAddtionalメソッドを呼び、サブクラス固有の情報を出力する
        diplayAddtional();
        System.out.println("");
    }

    // diplayAddtionalメソッド：戻り値はなし、引数もなし
    void diplayAddtional() { }
}
