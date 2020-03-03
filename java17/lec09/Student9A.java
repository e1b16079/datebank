// Studentのコンストラクタ無し版

class Student9A {
    private static final int minimumCredits = 124;
    // 卒業必要単位数
    protected int    id;                   // 学生番号
    protected String name;                 // 名前
    protected int    credits = 0;          // 取得単位数

    // 引数 i、n をフィールド id、name に代入する。
    void setData(int i, String n) {
        id = i;
        name = n;
    }

    // 単位数 n をフィールド credits に足す。単位数 n が正整数でなけらば何もしない。
    void addCredits(int n) {
        if (n > 0) {
            credits = credits + n;
        }
    }

    // 取得単位数を返す。
    int getCredits() {
        return credits;
    }

    // 残りの単位数を返す。
    int creditsRemainder() {
        int rem = minimumCredits - getCredits();
        return rem;
    }

    // インスタンスの情報を出力する
    void show() {
        System.out.println(id + "/" + name + " 単位/" + getCredits() + ", "
                           + creditsRemainder());
    }

}
