import java.awt.*;
import java.applet.*;

public class work48base extends Applet {
  public void paint(Graphics g) {
    int startX = 30, baseY = 140, step = 20, w = 10, hMag = 4;
    int[] rect = {9, 21, 7, 27, 20, 30, 11, 16, 25, 20, 30, 14};

    // 要素の順位を格納する配列
    int[] rectX = new int[rect.length];
    
    // X 軸を描く
    g.drawLine(startX - 10, baseY, startX + step * rect.length, baseY);
    
    for (int i = 0; i < rect.length; i++) {
      // 棒を描く
      g.drawRect(i * step + startX, baseY - rect[i] * hMag, w, rect[i] * hMag);
      
      // 要素の値を描く
      g.drawString("" + rect[i], i * step + startX, baseY + step);
      
      // 要素の順位を描く
      g.drawString("" + rectX[i], i * step + startX, baseY + step * 2);
    }
    
  }
}

