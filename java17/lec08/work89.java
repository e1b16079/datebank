class work89 {
    public static void main(String[] args) {
	 int[] ten=new int[args.length];
	 int[] num=new int[args.length];

	if(args.length>0){
	  int count=0,min,tmp=0;

	for(int i=0;i<args.length;i++){
	  ten[i] = Integer.parseInt(args[i]);
	  num[i] = i;
	}

	for(int i=0;i<args.length;i++){
	  for(int j=i+1; j<args.length;j++){
	    if(ten[i]>ten[j]){
	    tmp=ten[i];
	    ten[i]=ten[j];
	    ten[j]=tmp;

	    tmp=num[i];
	    num[i]=num[j];
	    num[j]=tmp;
	    }
	  }
	}

	for(int j=0;j<args.length;j++){
	  System.out.print(ten[j]+" ");
	}

	System.out.println("");

	for(int j=0;j<args.length;j++){
	  System.out.print(num[j]+" ");
	}



System.out.println("");






	}else{
	  System.out.println("引数を指定してください。");
	}









    }
}
