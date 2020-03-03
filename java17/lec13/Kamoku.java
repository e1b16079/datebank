class Kamoku {
    protected String name;          //科目名
    protected int border;           //合否ボーダーとなる点数

    // (1) ２引数のコンストラクタ： 引数はString型nとint型のb。
    //   引数nとbをフィールドnameとborderにそれぞれ代入する。
    Kamoku(String n,int b) {
	name=n;
	border=b;
    }

    // (2) １引数のコンストラクタ：引数はString型のn。
    //   引数nをフィールドnameに代入する。borderには60を代入する。
    //   代入文を用いてはならない。
    Kamoku(String n) {
	this(n,60);
    }

    // (3) メソッドeval：戻り値はboolean型。引数はStudent型のst。
    //   引数stの学生のscoreがborder以上ならばtrueを戻し、それ以外はfalseを戻す。
    boolean eval(Student st) {
	if(st.score<border){
	 return false;
	} else {
	 return true;
    }
}
    // (4) メソッドprintGouhi：戻り値はなし。引数はStudent型のst。
    //   evalメソッドを使い、引数stの合否判定の結果を出力する。
    void printGouhi(Student st) {
        String gouhi;

        // evalメソッドの戻り値によって、gouhiに"合格"または"不合格"を設定する。
	if(eval(st)==true){
	 gouhi="合格";
	} else {
	 gouhi="不合格";
	}

        System.out.println(st.name + "の科目「" + name + "」は" +
                           gouhi + "です。");
    }

    // printInfoメソッド: 戻り値はなし。引数もなし
    //   科目名と合否ボーダーを出力する。改行する。
    void printInfo() {
        printInfo(true);
    }

    // printInfoメソッド: 戻り値はなし。引数はboolen型のfeed。
    //   科目名と合否ボーダーを出力する。
    //   引数feedがtrueならば改行する。それ以外は改行しない。
    void printInfo(boolean feed) {
        if (feed) {
            System.out.println("科目: " + name + "\t合否ボーダー: " + border);
        } else {
            System.out.print("科目: " + name + "\t合否ボーダー: " + border);
        }
    }
}
