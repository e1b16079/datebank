class worke3 {

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

    static void reverse(int[] iarray){
	int tmp;

	for(int i=0;i<iarray.length/2;i++){
	tmp=iarray[i];
	iarray[i]=iarray[iarray.length-1-i];
	iarray[iarray.length-1-i]=tmp;
	}
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

	System.out.print("引数 = ");
        printArray(a);      

	reverse(a);

        System.out.print("逆数 = ");
	printArray(a);
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
    

}
