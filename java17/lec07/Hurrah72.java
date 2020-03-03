class Hurrah72 {
    // msg 以外のフィールドを定義してはいけません。
    private String msg = "Hello";

    // 次に必要なメソッドを書きます。

    void shout(int s){
	for(int i=s;i>0;i--){
 	  System.out.print(msg+" ");
	}

	System.out.println();
    }
    void shout(){
	shout( 1);
     }

    void setData(String m){
	msg=m;
    }

    void setData(){
	setData("Goodbye");
    }

}
