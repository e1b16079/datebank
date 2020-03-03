import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workc2 extends Applet implements MouseListener {
    Point p1;
    Color c1;

    public void init() {
        addMouseListener(this);

    }

    public void paint(Graphics g) {
        /* (3) p1 が設定されているかを調べます */ 
        if (p1 != null) {
            g.setColor(c1);
            g.fillOval(p1.x - 10, p1.y - 10, 20, 20);
        }
    }

    public void mouseClicked (MouseEvent e)  {
        p1 = e.getPoint();
        c1 = Color.red;
        repaint();
    }

    public void mouseReleased (MouseEvent e) {
        p1 = e.getPoint();
        c1 = Color.green;
        repaint();
    }

    public void mousePressed (MouseEvent e)  {
        p1 = e.getPoint();
        c1 = Color.blue;
        repaint();
    }

    public void mouseEntered(MouseEvent e)  {
        p1 = e.getPoint();
        c1 = Color.cyan;
        repaint();
    }

    public void mouseExited(MouseEvent e)   {
        p1 = e.getPoint();
        c1 = Color.magenta;
        repaint();
    }
}
