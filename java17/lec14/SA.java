class SA extends Student {
    protected int worktime;    // 勤務時間

    // (1) 引数なしのコンストラクタ：
    //   フィールドid、name、worktimeにそれぞれ0、"未設定"、0を代入する
    SA() {
        // SAクラスのコンストラクタを利用します
	this(0,"未設定",0);
    }

    // (2) ３引数のコンストラクタ：引数はint型のi、String型のn
    //   引数i、n、wをそれぞれフィールドid、name、worktimeに代入する
    SA(int i, String n, int w) {
        // Studentクラスのコンストラクタを利用します
	super(i,n);
	worktime = w;
    }

    // (3) メソッドprintInfoExtra：戻り値はなし、引数もなし
    //   勤務時間と給料を出力する。時給は800円とする。
    void printInfoExtra() {
        // Studentクラスのメソッドをオーバーライドします

	System.out.print("\t勤務時間: "+ worktime +"\t給料: "+ 800*worktime);

    }

    // メソッドkinmu：戻り値はなし、引数はint型のhour
    //   勤務時間をhour時間だけ増やす
    void kinmu(int hour) {
        worktime += hour;
    }

    // (4) メソッドkinmu：戻り値はなし、引数もなし
    //   勤務時間を1時間だけ増やす
    void kinmu() {
        // オーバーロードするメソッド利用します
	kinmu(1);
    }
}
