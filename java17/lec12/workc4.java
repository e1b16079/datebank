import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc4 extends Applet implements MouseListener {
    Point p1; // mousePressed  の位置
    Point p2; // mouseReleased の位置

    public void init() {
        addMouseListener(this);
    }

    void drawPoint(Graphics g, Point p, int r, Color c) {
    g.setColor(c);
    g.drawOval(p.x - r, p.y - r, r * 2, r * 2);
    }

    public void paint(Graphics g) {

        if (p1 != null && p2 != null) {
        int rr= (int)p1.distance(p2);
	if(rr != 0){

            // 点 p1 と p2 を結ぶ線を描く
        g.drawLine(p1.x, p1.y, p2.x, p2.y);

	drawPoint(g,p1,5,Color.black);
	g.drawString("p1",p1.x+8,p1.y+8);

	drawPoint(g,p1,rr,Color.black);
        g.drawString("p2",p2.x+8,p2.y+8);    
	}
        }
    }

    public void mousePressed(MouseEvent e) {
        p1 = e.getPoint();
        p2 = null;
        repaint();
    }

    public void mouseReleased(MouseEvent e) {
        p2 = e.getPoint();
        repaint();
    }

    public void mouseClicked(MouseEvent e) {
        p1 = null;
        p2 = null;
        repaint();
    }

    public void mouseEntered(MouseEvent e) {}   // 空メソッド
    public void mouseExited(MouseEvent e)  {}   // 空メソッド
}
