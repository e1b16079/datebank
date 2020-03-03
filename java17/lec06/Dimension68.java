class Dimension68 {
    private int width;
    private int height;

    void setSize(int w0, int h0){
     width = w0;
     height = h0;
    }

    void show(){
    int s=width * height;
     System.out.print(this.toString() + " ");
     if(width==height){
      System.out.print("正方形領域");
     }
     else{
      System.out.print("長方形領域");
     }

     System.out.println("("+width+"X"+height+")"+" 面積 = "+s);
    }

