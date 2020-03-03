class Point {
    protected int x;  // x座標
    protected int y;  // y座標

    // (1) ２引数のコンストラクタ：引数はint型のpxとpy。
    //     引数pxとpyをフィールドxとyにそれぞれ代入する。
    Point(int px,int py){
	x=px;
	y=py;

    }

    // (2) 引数なしのコンストラクタ
    //     フィールドxとyに0を代入する。代入文を用いてはならない。
    Point(){
	this(0,0);

    }

    // (3) moveメソッド：戻り値はなし。引数はint型のpxとpy。
    //     この点を(x + px, )に移動する。
    void move(int px,int py){
	x=x + px;
	y=y + py;

    }

    // (4) isEqualメソッド：戻り値はboolean型。引数は Point型のp。
    //     この点と引数pの位置が同じときはtrueを、それ以外はfalseを戻す。
    boolean isEqual(Point p){
	if(p.x==x&&p.y==y){
	  return true;
	} else{
	  return false;
	}
    }

    // printInfoメソッド：戻り値はなし。引数はString型のname。
    // この点の名前nameを出力し、更に位置を出力する。
    void printInfo(String name){
        System.out.println("点 "  + name +
                           " の座標は (" + x + ", " + y + ") です。");
    }

    // (5) printEqualメソッド：戻り値はなし。引数はPoint型のp。
    //     isEqualメソッドを使い、この点と引数pとの位置関係を出力する
    void printEqual(Point p){
        System.out.print("2つの点は");
	if(isEqual(p)==true){
	System.out.println("位置が同じです");
	} else {
	System.out.println("位置が違います");
	}


    }
}
