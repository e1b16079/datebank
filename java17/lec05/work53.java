class work53 {
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
            
            for (int i = s ; i <=e; i++){
                System.out.print(i+" ");
            }
      System.out.println("");
        } else {
            System.out.println("引数の個数が違います。" );
        }
    }
}

