// (1) Kamokuクラスを継承したEnsyuクラスを定義する。
class Ensyu extends Kamoku {
    protected int klimit;    // 欠席数限界

    // (2) ３引数のコンストラクタ：引数はString型のn、int型のb、int型のlm。
    //     引数n、b、lmをフィールドname、border、klimitにそれぞれ代入する。
    Ensyu(String n, int b, int lm) {
	super(n,b);
	klimit=lm;
    }

    // (3) メソッドeval：戻り値はboolean型。引数はStudent型のst。
    //     引数stのフィールドkessekiがklimit以下ならば、親クラスのevalメソッドを使って
    //     合否を判定する。それ以外はfalseを戻す。
    boolean eval(Student st) {
	if(st.kesseki<=klimit){
	return super.eval(st);
	} else {
	  return false;
	}

    }

    // printInfoメソッド: 戻り値はなし。引数もなし
    //   科目名、合否ボーダー、欠席数限界を出力する。改行する。
    void printInfo() {
        printInfo(false);
        System.out.println("\t欠席数限界: " + klimit);
    }
}
