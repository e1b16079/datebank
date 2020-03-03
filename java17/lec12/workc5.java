import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc5 extends Applet implements MouseMotionListener {
    Point p1; // 現在の位置


    public void init() {

        addMouseMotionListener(this);
    }

    public void paint(Graphics g){
	if (p1 != null) {
	    Rectangle ra = getBounds();
	    g.drawLine(0,p1.y,ra.width,p1.y);
	    g.drawLine(p1.x,0,p1.x,ra.height);
	    g.drawString("("+p1.x+","+p1.y+")",p1.x+2,p1.y-2);
        }

}


    public void mouseMoved(MouseEvent e) {
	p1 = e.getPoint();
	repaint();
	}

    public void mouseDragged(MouseEvent e) {} // 空メソッド
}
