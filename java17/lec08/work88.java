class work88 {
    public static void main(String[] args) {
      int[] argsPlus1=new int[args.length+1];
      int[] c=new int[args.length];
	if(args.length>0){
	  int x, count=1, max=0, num=0;

	for(int i=0;i<args.length;i++){
	  argsPlus1[i] = Integer.parseInt(args[i]);
	}

	argsPlus1[args.length]=argsPlus1[args.length-1]+1;

	for(int j=0;j<args.length;j++){
	  System.out.print(argsPlus1[j]+" ");
	}
	System.out.println("("+argsPlus1[args.length]+")");


	for(int k=0;k<args.length;k++){
	  c[k]=count;
	  if(argsPlus1[k]==argsPlus1[k+1]){
	     count++;
	  }else if(max<count){
	     max=count;
	     num=argsPlus1[k];
	     count=1;
	   }
	}


	for(int j=0;j<args.length;j++){
	  System.out.print(c[j]+" ");
	}
	System.out.println("");


	System.out.format("一番長く連続する値= %d, 連続する個数 = %d\n",num,max );




	}else{
	  System.out.println("引数を指定してください。");
	}



    }
}
