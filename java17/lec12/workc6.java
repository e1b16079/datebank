import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc6 extends Applet implements MouseListener, MouseMotionListener {
    Point p1;                   // mousePressed の位置
    Point p2;                   // mouseReleased, mouseDragged の位置
    Rectangle r1 = new Rectangle(20, 20 , 100, 50);
    boolean moving = false;

    public void init() {
        addMouseListener(this);
        addMouseMotionListener(this);
    }

    public void paint(Graphics g) {

        if (moving == true) {
            g.setColor(Color.lightGray);
	    g.fillRect(r1.x + 5, r1.y + 5, r1.width, r1.height);
	    g.setColor(Color.black);
	    g.fillRect(r1.x, r1.y, r1.width, r1.height);
        }else{
	g.setColor(Color.black);
	g.fillRect(r1.x, r1.y, r1.width, r1.height);
    }
}
    public void mouseDragged(MouseEvent e) {
	if(moving == true){
        p2 = e.getPoint();
	r1.x=r1.x-(p1.x-p2.x);
	r1.y=r1.y-(p1.y-p2.y);
	p1=p2;
	
	}
        repaint();
    }

    public void mousePressed(MouseEvent e) {
        p1 = e.getPoint();
	moving=r1.contains(p1);
        repaint();
    }

    public void mouseReleased(MouseEvent e) {
	if(moving == true){
        p2 = e.getPoint();
	r1.x=r1.x+(p1.x-p2.x);
	r1.y=r1.y+(p1.y-p2.y);
	moving=false;}
        repaint();
    }

    public void mouseClicked(MouseEvent e) {
        p1 = null;
        p2 = null;
        repaint();
    }

    public void mouseMoved(MouseEvent e)   {}   // 空メソッド
    public void mouseEntered(MouseEvent e) {}   // 空メソッド
    public void mouseExited(MouseEvent e)  {}   // 空メソッド
}
