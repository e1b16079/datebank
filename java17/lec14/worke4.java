class worke4 {
    
    static int calcSumPrice(int[] iarray) {
        int size = iarray.length,sum=0;
        
            for (int i = 0; i < size ; i++) {
              sum=sum+iarray[i];
            }
	if(sum>1499){
	sum=sum-500;
}
	return sum;
}

 public static void main(String[] args) {
        int count = args.length;
	int sum;        

        if (count < 1) {
            System.out.println("引数を指定してください。");
	    return;
        }


            int[] a = new int[count];
            
            for (int i = 0 ; i < count; i++) {
                a[i] = Integer.parseInt(args[i]);
            }
        
	sum= calcSumPrice(a);
	System.out.format("合計価格; %d\n", sum);
    }
}java worke4 300 100 500 600
