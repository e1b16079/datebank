class work55 {
    public static void main(String[] args) {
        int count = args.length;
        
        if (count > 0) {

	int[] a = new int[count];
            
            for (int i = 0 ; i < count; i++) {
                a[i] = Integer.parseInt(args[i]);
            }

            double average=calcAverage(a);
        System.out.println("平均 = "+average);
        } else {
            System.out.println("引数を指定してください。");
        }
    }
    
    static double calcAverage(int[] x) {
        int size = x.length;
        int max = 0;
	double ave = 0;
        if (size > 0) {
            for (int i = 0; i < size ; i++) {
                max=max+x[i];
            }
            ave=(double)max/size;
        }
        return ave;
    }
}

