// 継承 ＋ オーバーロード

class Student92 extends Student9A {
    // TOEICの点数を格納するフィールド toeic を定義する
    //   型は int で、初期値は 0 。protectedキーワードを付ける。
	protected int toeic=0;

    // 引数 i、n、t をフィールド id、name、toeic に代入する。
    void setData(int i, String n, int t) {
	id=i;
	name=n;
	toeic=t;
    }

    // TOEICの点数 t をフィールド toeic に代入する。
    void setToeic(int t) {
	toeic=t;
    }

    // TOEICの点数を返す。
    int getToeic() {
	return toeic;
    }

    // インスタンスの情報を出力する。このメソッドを修正してはいけない。
    void show() {
        System.out.format("%6s | %s | 単位 %3d %3d | TOEIC %3d\n",
                          id, name, getCredits(), creditsRemainder(), toeic);
    }

    int getAddition(){
	if(toeic>750){
	  return 4;
	}else if(toeic>500){
	  return 2;
	}else{
	  return 0;
	}
    }

    int getCredits(){
	return super.getCredits()+getAddition();
    }
}
