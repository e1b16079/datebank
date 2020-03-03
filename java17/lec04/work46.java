import java.awt.*;
import java.applet.*;

public class work46 extends Applet {
  public void paint(Graphics g) {
    int x = 10;
    int[] rect = {9, 21, 7, 27, 20, 30, 11, 16, 25, 20, 30, 14};

    // １列目： 上辺を Y=10 に揃えて先頭の要素から描く
    for (int i = 0; i < rect.length; i++) {
      g.drawRect(x, 10, rect[i], rect[i]);
      x = x + rect[i];
    }

    // ２列目： 下辺を Y=80 に揃えて先頭の要素から描く
    g.setColor(Color.blue);
    x = 10;
    for (int i = 0; i < rect.length; i++) {
      g.drawRect(x,80-rect[i], rect[i], rect[i]);
      x = x + rect[i];
    }

    // ３列目： 下辺を Y=120 に揃え、添字の大きい要素から描く
    g.setColor(Color.red);
    x = 10;
    for (int i =rect.length-1; i>=0; i--) {
      g.drawRect(x,120-rect[i], rect[i], rect[i]);
      x = x + rect[i];
    }
  }
}

