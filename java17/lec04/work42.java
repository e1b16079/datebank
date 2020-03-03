import java.awt.*;
import java.applet.*;

public class work42 extends Applet {
  public void paint(Graphics g) {
    int x = 10;

    int[] rect = {9,21,7,27,20,30,11,16,25,20,30,14};

    for (int i = 0; i < rect.length; i++) {
        g.drawRect(x, 10, rect[i], rect[i]);
        x = x + rect[i];
    }

    int[] rectS = new int[12];
     rectS[0]=rect[0];

    for(int i=1;i<rect.length; i++){

     rectS[i]=rectS[i-1]+rect[i];
    }

    for (int i = 0; i < rect.length; i++) {
        g.drawRect(10, 50, rectS[i], rectS[i]);
    }







  }
}

