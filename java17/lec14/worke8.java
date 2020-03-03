class worke8 {
    static int getMax(int[] darray){
	int size = darray.length;
	int max = darray[0];

	for(int i=1;i<size;i++){
	  if(max<darray[i]){
	  max=darray[i];
	  }
	}

	return max;

    }

    static void normalizeArray(int[] iarray, double[] darray){
	int max = getMax(iarray);

	for(int i=0;i<iarray.length;i++){
	  darray[i]=(double)iarray[i]/max;
    }

}
    static void printArray(int[] iarray) {
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

    static void printArray(double[] darray, String form) {
        int size = darray.length;
        
        System.out.print("{");
        if (size > 0) {
            for (int i = 0; i < size - 1; i++) {
                System.out.format(form + ", ", darray[i]);
            }
            System.out.format(form,darray[size - 1]);
        }
        System.out.println("}");
    }



    public static void main(String[] args) {
	int count = args.length;

	if (count < 1) {
            System.out.println("引数を指定してください。");
	    return;
        }

	int[] a = new int[count];
        for (int i = 0 ; i < count; i++) {
            a[i] = Integer.parseInt(args[i]);
        }

	double[] b = new double[count];

	printArray(a);
	int max= getMax(a);   

        System.out.println("最大値 = "+ max);

	normalizeArray(a,b);

	printArray(b,"%.2f");
}










}

