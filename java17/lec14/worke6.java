class worke6 {
    public static void main(String[] args){
        System.out.println("---- 学生の情報 ----");

        // (1) Studentクラスのインスタンスtaroを生成する
        //   学生番号は2011333、氏名は"工大太郎"に設定する
	Student taro = new Student(2011333,"工大太郎");

        // (2) taroの学生情報をprintInfoメソッドで表示する
	taro.printInfo();

        System.out.println("---- SAの情報 ----");

        // (3) SAクラスのインスタンスhanakoを生成する
        // 学生番号は2011777、氏名は"枚方花子"、勤務時間は10に設定する
	SA hanako = new SA(2011777,"枚方花子",10);

        // (4) SAクラスのメソッドを使って勤務時間に7を足す
	hanako.kinmu(7);

        // (5) hanakoの学生情報をprintInfoメソッドで表示する
	hanako.printInfo();
	

    }
}
