class Student66 {

    static private final int minimumCredits=124;

    private int id = 800000;                    // 学生番号
    private String name = "なまえはありません"; // 名前
    private int credits = 0;                    // 単位数
    private double height = 1.65;
    private double weight = 62.5;

    double calcStandardWeight(){
     double r=22.0*height*height;
     return r;
    }

    void show() {
        System.out.println("-------------------------");
        System.out.print(this.toString() + " ");
        System.out.print(this.id + " : " + this.name + "(" + this.credits +","+
							creditsRemainder()+ ") ");
	System.out.println("["+this.height+","+this.weight+"]"+calcStandardWeight());
    }

    int getCredits() {
        return this.credits;
    }

    void setData(int i, String n) {
        this.id = i;
        this.name = n;
    }

    void addCredits(int n) {
        if (n > 0) {
            this.credits = this.credits + n;
        }
    }

    void setHW(double h, double w){
	this.height=h;
	this.weight=w;
    }

   int creditsRemainder(){
     int rem=minimumCredits-credits;
     if(rem<0){
	rem=0;
      }
	return rem;
    }
}
