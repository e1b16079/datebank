import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc3 extends Applet implements MouseListener {
    Point p1; // mousePressed  の位置
    Point p2; // mouseReleased の位置
    Point p3; // mouseClicked  の位置

    public void init() {
        addMouseListener(this);
    }

    /* メソッドの名前を drawPoint から fillPoint へ変更しています。*/
    void fillPoint(Graphics g, Point p, int r, Color c) {
        g.setColor(c);
        g.fillOval(p.x - r, p.y - r, r * 2, r * 2);
    }

    public void paint(Graphics g) {
        /* 次のfillPointメソッドの引数の円の半径 r と色 c だけを変更します */
        if (p1 != null) fillPoint(g, p1, 30, Color.orange);
        if (p2 != null) fillPoint(g, p2, 20, Color.blue);
        if (p3 != null) fillPoint(g, p3, 10, Color.pink);
    }

    public void mousePressed(MouseEvent e) {
        p1 = e.getPoint();
        p2 = null;
        p3 = null;
        repaint();
    }

    public void mouseReleased(MouseEvent e) {
        p2 = e.getPoint();
        repaint();
    }

    public void mouseClicked(MouseEvent e) {
        p3 = e.getPoint();
        repaint();
    }

    public void mouseEntered(MouseEvent e) {}   // 空メソッド
    public void mouseExited(MouseEvent e)  {}   // 空メソッド
}
