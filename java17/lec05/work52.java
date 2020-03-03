class work52 {
    public static void main(String[] args) {
      String normal = "";
      String reverse = "";
        if (args.length > 0) {
            for (int i=0; i < args.length; i++) {
             normal=normal+args[i];
	     reverse=args[i]+reverse;  
            }
         
      System.out.println("プログラム引数の個数は"+args.length+"です。");
      System.out.println("正順 = "+normal);
      System.out.println("逆順 = "+reverse);

       }else {
            System.out.println("引数を指定してください。");
        }
    }
}

