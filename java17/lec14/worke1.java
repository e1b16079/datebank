class worke1 {
    
    static double calcAverage(int[] iarray) {
        int size = iarray.length,sum=0;
        
 
            for (int i = 0; i < size ; i++) {
              sum=sum+iarray[i];
            }
	return (double)sum/size;
}

 public static void main(String[] args) {
        int count = args.length;
	double av;        

        if (count < 1) {
            System.out.println("引数を指定してください。");
	    return;
        }


            int[] a = new int[count];
            
            for (int i = 0 ; i < count; i++) {
                a[i] = Integer.parseInt(args[i]);
            }
        
	av= calcAverage(a);
	System.out.format("平均値 = %.2f\n", av);
    }
}
