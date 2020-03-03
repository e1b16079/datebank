import java.awt.*;
import java.applet.*;

public class work44 extends Applet {
  public void paint(Graphics g) {
    int x=10, y, size; // x 座標, y 座標, 大きさ
    
    int[] rect = {9,21,7,27,20,30,11,16,25,20,30,14};

    for(int i = 0; i < rect.length; i++){
       size =rect[i]*2;

      drawPacMan( g, x , 80-size , size);
      x=x+size; 
   }
  }
   void drawPacMan(Graphics g, int x, int y, int size){
    g.setColor(Color.yellow);
    g.fillArc(x, y, size, size, 45, 300);
    g.setColor(Color.black);
    g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
  }
}

