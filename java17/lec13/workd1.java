public class workd1 {
    public static void main(String[] args){
        // (1) 点 (20, 30) を表す Point クラスのインスタンスp1を生成する。
        //   ２引数のコンストラクタを使う
        Point p1 = new Point(20,30);

        // (2) 点 (0, 0) を表す Point クラスのインスタンス p2 を生成する。
        //   引数なしのコンストラクタを使う
        Point p2 =new Point(); 

        p1.printInfo("p1");
        p2.printInfo("p2");
        p1.printEqual(p2);

        // (3) 点p2を座標(20, 30)に移動する
	p2.move(20,30);

        // 以降は変更しません。
        p1.printInfo("p1");
        p2.printInfo("p2");
        p1.printEqual(p2);

    }
}
