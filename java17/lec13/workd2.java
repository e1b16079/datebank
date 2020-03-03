class workd2 {
    public static void main(String[] args) {
        String gouhi;
        // (1) Kamokuクラスのインスタンスk1を適切なコンストラクタを使って生成する
        //   科目名を「A入門」、合否ボーダーを60点とする。
        Kamoku k1 = new Kamoku("A入門");

        // (2) Ensyuクラスのインスタンスe1を生成する。
        //   科目名を「B演習」、合否ボーダーを75点、欠席数限界を4とする。
        Ensyu e1 = new Ensyu("B演習",75,4);

        // インスタンスk1とe1の情報を出力する。
        k1.printInfo();
        e1.printInfo();

        System.out.println("--------------------");

        // Studentクラスのインスタンスst1を生成する。
        //  「工大太郎」の成績を70点、欠席回数を3回とする。
        Student st1 = new Student("工大太郎", 70, 3);
        st1.printInfo();

        // Studentクラスのインスタンスst2を生成する。
        //  「長尾次郎」の成績を80点、欠席回数を6回とする。
        Student st2 = new Student("長尾次郎", 80, 6);
        st2.printInfo();

        System.out.println("--------------------");

        // 「A入門」の st1 の合否判定結果を出力する。
        k1.printGouhi(st1);

        // 「B演習」のst2の合否判定結果を出力する。
        e1.printGouhi(st2);
    }
}
