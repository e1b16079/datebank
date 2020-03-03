class worke5 {
    
    static double calcAverage(double[] iarray) {
        int size = iarray.length;
	double sum=0;
        
 
            for (int i = 0; i < size ; i++) {
              sum=sum+iarray[i];
            }
	return sum/size;
}

 public static void main(String[] args) {
        int count = args.length;
	double av;        

        if (count < 1) {
            System.out.println("引数を指定してください。");
	    return;
        }


            double[] weight = new double[count];
            
            for (int i = 0 ; i < count; i++) {
                weight[i] = Double.parseDouble(args[i]);

            }
        
	av= calcAverage(weight);
	
	for(int i=0;i<count; i++){
	  System.out.print((i+1) + "番目の人の体重は"  +
						weight[i] + "kgで");
	  System.out.format("平均値　%.2f",av);

	  if(weight[i]<av){
	  System.out.println("未満です");
	  }else{
	  System.out.println("以上です");
}
    }
}}
