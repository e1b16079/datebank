import java.awt.*;
import java.applet.*;

public class work47 extends Applet {
  public void paint(Graphics g) {
    int startX = 30, baseY = 140, step = 20, w = 10, hMag = 4;
    int[] rect = {9, 21, 7, 27, 20, 30, 11, 16, 25, 20, 30, 14};
    double mean=0;

    // X 軸を描く
    g.drawLine(startX - 10, baseY, startX + step * rect.length, baseY);
    
    for (int i = 0; i < rect.length; i++) {
      // 棒を描く
      g.fillRect(i * step + startX, baseY - rect[i] * hMag, w, rect[i] * hMag);
      
      // 要素の値を描く
      g.drawString("" + rect[i], i * step + startX, baseY + step);
    }
   for(int i = 0; i < rect.length; i++){
     
     mean= mean+rect[i];
  }
    mean=mean/rect.length;
     drawAverage( g,  mean, startX - 10,  (int)(mean*4),  startX + step * rect.length);

}

  void drawAverage(Graphics g, double mean, int x, int y, int width){
   g.setColor(Color.blue);
    g.drawString("平均値=" + mean, 40,20);

   g.setColor(Color.red);
    g.drawLine(x, y, width, y);
   }

}
