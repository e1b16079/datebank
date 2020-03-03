import java.awt.*;
import java.applet.*;

public class work43 extends Applet {
  public void paint(Graphics g) {
    int x = 10;

    int[] rect = {9,21,7,27,20,30,11,16,25,20,30,14};
    int[] rectM = new int[rect.length-1];


    for(int i = 0; i < rectM.length; i++){
     rectM[i]= minOf(rect[i],rect[i+1]);
    }

    for (int i = 0; i < rect.length-1; i++) {
        g.drawRect(x, 30, rect[i], rect[i+1]);
        x = x + rect[i];
    }
    x=10;
    g.setColor(Color.blue);
    for (int i = 0; i < rectM.length; i++) {
      g.drawRect(x, 100-rectM[i], rect[i], rectM[i]);
      g.drawString("" + rectM[i],x,120);
      x = x + rect[i];
    }


   

 }
   int minOf(int x, int y){
    if(x>y)
    return y;
    else
    return x;
   }
}
