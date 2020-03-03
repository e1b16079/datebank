import java.awt.*;
import java.applet.*;

public class work21 extends Applet {
  public void paint(Graphics g) {
    int x, y, size; // x 座標, y 座標, 大きさ
    
    // 中パックマン
    x = 144; y = 44; size = 96;
    g.setColor(Color.pink);
    g.fillArc(x, y, size, size, 45, 300);
    g.setColor(Color.orange);
    g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    
    // 小パックマン
    x = 110; y = 80; size = 60;
    g.setColor(Color.cyan);
    g.fillArc(x, y, size, size, 45, 300);
    g.setColor(Color.blue);
    g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);

    // 大パックマン
    x = 10; y = 20; size = 120;
    g.setColor(Color.green);
    g.fillArc(x, y, size, size, 45, 300);
    g.setColor(Color.darkGray);
    g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
  }
}

