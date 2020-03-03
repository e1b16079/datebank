class Student {
    String name; // 名前
    int score;   // 試験点数
    int kesseki; // 欠席回数

    // ３引数のコンストラクタ：引数はString型のn、int型のs、int型のk。
    //   引数n、s、kをフィールドname、score、kessekiにそれぞれ代入する。
    Student(String n, int s, int k) {
        name = n;
        score = s;
        kesseki = k;
    }

    void printInfo() {
        System.out.println("名前: " + name +
                           "\t試験点数: " + score + "\t欠席回数: " + kesseki);
    }
}
