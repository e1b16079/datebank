class Student83 {
    private static final int minimumCredits = 124;
    // 卒業必要単位数
    private int id;             // 学生番号
    private String name;        // 名前
    private int credits = 0;    // 単位数

    Student83(int i, String n){
	id=i; name=n; credits = 0;
    }

    Student83(int i, String n, int c){
	id=i; name=n; credits = c;
    }

    void show() {
        System.out.println(toString() + "\t" +
                           id + " : " + name +
                           " (" + getCredits() + ", " + creditsRemainder()+ ")");
    }

    int getCredits() {
        return credits;
    }

    void setData(int i, String n) {
        id = i;
        name = n;
    }

    void addCredits(int n) {
        if (n > 0) {
            credits = credits + n;
        }
    }

    int creditsRemainder() {
        int rem = minimumCredits - credits;
        if (rem < 0) {
            rem = 0;
        }
        return rem;
    }
}
