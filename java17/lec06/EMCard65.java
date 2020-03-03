class EMCard65{
 private int zandaka=1000;

    void show(){
	System.out.println(" 残高"+":"+zandaka+"円");
    }

    void charge(int yen){
	zandaka=zandaka+yen;
    }

    void pay(int yen){
      if(zandaka>=yen){
	zandaka=zandaka-yen;
	System.out.println(" 支払"+":"+yen+"円");
      }
      else{
	System.out.println(" 残高不足");
      }
    }
}
