import java.awt.*;
import java.applet.*;

public class work41 extends Applet {
  public void paint(Graphics g) {
    int x = 10;

    int[] rect = {9,21,7,27,20,30,11,16,25,20,30,14};

    for (int i = 0; i < rect.length-1; i++) {
        g.drawRect(x, 30, rect[i], rect[i+1]);
        x = x + rect[i];
    }
  }
}




