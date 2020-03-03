class work54 {
    public static void main(String[] args) {
        if (args.length > 1) {
        int s=Integer.parseInt(args[0]);
        int e=Integer.parseInt(args[1]);
         if(s>e){
           int tmp=0;
          tmp=s;
          s=e;
          e=tmp;
	 }
        int cnt = 0;
         cnt = countOddNumber(s,e);
      System.out.println(s+"から"+e+"までの奇数の個数: "+cnt);
        } else {
            System.out.println("引数を指定してください。");
        }
    }
    
    static int countOddNumber(int x, int y) {
        int result=0;
        for (int i = x ; i <=y; i++){
          if(i%2==1){
           result++;
          }
            }
        
        return result;
    }
}

