class Hurrah75 {
    // msg と count 以外のフィールドを定義してはいけません。
    private String msg = "Hey";
    private int count = 1;

    void setData(String m0, int n0) {
        msg = m0; count = n0;
    }

    void checkMsg() {
        System.out.println("msg = " + msg);
    }

    // 次に必要なメソッドを追加する。

    void shout(){
	for(int i=count;i>0;i--){
	  System.out.print(msg);
	}
	System.out.println();
    }

    void shout(String m, int n){
	setData(m,n);

	for(int i=count;i>0;i--){
	  System.out.print(msg);
	}
	System.out.println();

	if(count==3){
	  setData();
	} 
	else{
	  setData("Let's GO!", 5);
	}
    }

     void setData() {
        msg = "Hey"; count = 1;
    }



}
