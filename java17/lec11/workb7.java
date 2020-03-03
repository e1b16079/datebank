import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workb3 extends Applet implements ActionListener {
    int x=Math.max(0, Math.min(100, 200)),y=Math.max(0, Math.min(100, 200));
    TextField aField;
    Rectangle r1 = new Rectangle(x, y, 50, 50);
    
    public void init() {


    public void actionPerformed(ActionEvent e) {
        if ( e.getSource() == leftButton) {
            p1.translate(-10, 0);
	  if(r1.contains(p1)==false){
	    r1.translate(-10,0);
	  }
        } else {
            p1.translate(10, 0);
	  if(r1.contains(p1)==false){
	    r1.translate(10,0);
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
