import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workb6 extends Applet implements ActionListener {
    int w=50,px=125,x=100;
    Button leftButton, rightButton;
    Point p1 = new Point(px, 60);
    Rectangle r1 = new Rectangle(x, 40, w, 40);

    public void init() {
        leftButton = new Button("left"); add(leftButton);
        leftButton.addActionListener(this);
        rightButton = new Button("right"); add(rightButton);
        rightButton.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        if ( e.getSource() == leftButton) {
            p1.translate(-10, 0);
	  if(r1.contains(p1)==false){
	    w=w+20;
	    r1.setSize(w,40);
	r1.translate(-10,0);
	  }
	  if(50<w){
	  w=w-10;
	  r1.setSize(w,40);
	  }
        } else {
            p1.translate(10, 0);
	  if(r1.contains(p1)==false){
	    w=w+10;
	    r1.setSize(w,40);
	  }
	}
        repaint();
    }

    public void paint(Graphics g) {
        if (r1.contains(p1)) {
            g.setColor(Color.red);
        } else {
            g.setColor(Color.yellow);
        }
        g.fillOval(p1.x - 5, p1.y - 5, 10, 10);

        g.setColor(Color.black);
        g.drawRect(r1.x, r1.y, r1.width, r1.height);
    }
}
