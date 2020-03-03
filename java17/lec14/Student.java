class Student {
    protected int id;       // 学生番号
    protected String name;  // 氏名

    // ２引数のコンストラクタ：引数はint型i、String型n
    //   引数i、nをそれぞれフィールドid、nameに代入する
    Student(int i, String n) {
        id = i;
        name = n;
    }

    // メソッドprintInfo：戻り値はなし、引数もなし
    //   学生情報を表示する
    void printInfo() {
        System.out.print("学生番号: " + id);
        System.out.print("\t氏名: " + name);

        // 付加情報を出力する
        printInfoExtra();

        // 改行を出力する
        System.out.println("");
    }

    // メソッドprintInfoExtra：戻り値はなし、引数もなし
    //   付加情報を出力する
    void printInfoExtra() {
        // 何もしない。サブクラスでオーバーライドする
    }

}
