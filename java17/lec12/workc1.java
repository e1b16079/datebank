import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc1 extends Applet implements MouseListener {
    Point p1;

    public void init() {
        addMouseListener(this);

    }

    public void paint(Graphics g) {
        /* (3) p1 が設定されているかを調べます */
        if (p1 != null) {
            g.setColor(Color.green);
            g.fillOval(p1.x - 10, p1.y - 10, 20, 20);
        }
    }

    public void mousePressed(MouseEvent e)  {
        /* (5) イベントの座標を取得します */
        p1 =  e.getPoint();
        repaint();
    }

    public void mouseClicked(MouseEvent e)  {}  // 空メソッド
    public void mouseReleased(MouseEvent e) {}  // 空メソッド
    public void mouseEntered(MouseEvent e)  {}  // 空メソッド
    public void mouseExited(MouseEvent e)   {}  // 空メソッド
}
