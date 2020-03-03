import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc7 extends Applet implements MouseListener, MouseMotionListener {
    Rectangle r1 = new Rectangle(0,0,0,0);
    Point p1;                   // mousePressed の位置
    Color rcolor = Color.orange;
    boolean normalMode = true;
    public void init() {
        addMouseListener(this);
        addMouseMotionListener(this);
    }

    public void paint(Graphics g) {
        if (r1.width >=0 && r1.height >= 0) {
            g.setColor(rcolor);
	 g.fillRect(r1.x,r1.y,r1.width,r1.height);
        }
    }

    void setRectangle(Rectangle rc, Point corner1, Point corner2){
	rc.x=corner1.x;
	rc.y=corner1.y;
	rc.width = corner2.x-corner1.x;
	rc.height = corner2.y-corner1.y;
    }


    public void mousePressed(MouseEvent e) {
	p1 = e.getPoint();
	normalMode=!r1.contains(p1);
	if(normalMode){
	  setRectangle(r1,p1,e.getPoint());
	}else{
	  if((e.getModifiersEx() & MouseEvent.SHIFT_DOWN_MASK)==MouseEvent.SHIFT_DOWN_MASK){
	   rcolor = rcolor.brighter();
	  }
	  if((e.getModifiersEx() & MouseEvent.CTRL_DOWN_MASK)==MouseEvent.CTRL_DOWN_MASK){
	   rcolor = rcolor.darker();
	  }
	 normalMode=false;
	}

        repaint();
    }


    public void mouseReleased(MouseEvent e) {
	if(normalMode){
	setRectangle(r1,p1,e.getPoint());
	}
        repaint();
    }

    public void mouseClicked(MouseEvent e) {
	if(normalMode){
	setRectangle(r1,p1,e.getPoint());
	}
        repaint();
    }

    public void mouseDragged(MouseEvent e) {
	if(normalMode){
	setRectangle(r1,p1,e.getPoint());
	}
        repaint();
    }

    public void mouseMoved(MouseEvent e)   {}   // 空メソッド
    public void mouseEntered(MouseEvent e) {}   // 空メソッド
    public void mouseExited(MouseEvent e)  {}   // 空メソッド
}
