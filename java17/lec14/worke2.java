class worke2 {

    static double getMax(double[] darray){
	int size = darray.length;
	double max = darray[0];

	for(int i=1;i<size;i++){
	  if(max<darray[i]){
	  max=darray[i];
	  }
	}

	return max;

    }

    public static void main(String[] args) {
        int count = args.length;
        double max;

        if (count < 1) {
            System.out.println("引数を指定してください。");
	    return;
        }

	double[] a = new double[count];
        for (int i = 0 ; i < count; i++) {
            a[i] = Double.parseDouble(args[i]);
        }

        printArray(a);   
        max= getMax(a);   

        System.out.println("最大値 = "+ max);  
        } 
    
    
    static void printArray(double[] iarray) {
        int size = iarray.length;
        
        System.out.print("{");
        if (size > 0) {
            for (int i = 0; i < size - 1; i++) {
                System.out.print(iarray[i] + ", ");
            }
            System.out.print(iarray[size - 1]);
        }
        System.out.println("}");
    }
}
