import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workd7 extends Applet implements ItemListener {
    List a = new List(5);
    List b = new List(5);
    List c = new List(5);

    Color color;

    public void init() {
        for (int i = 0; i <=255; i=i+15){
	a.add(""+i);
	b.add(""+i);
	c.add(""+i);
    }
 
	a.selsect(0);
	add(a);
	red.addItemListener(this);

	b.selsect(0);
	add(b);
	red.addItemListener(this);

	c.selsect(0);
	add(c);
	red.addItemListener(this);

	color = new Color(0,0,0);
    }
    
    public void paint(Graphics g) {
	g.setColor(color);
	g.fillRect(40,120,360,60);
    }
    
    public void itemStateChanged(ItemEvent e) {
        int rr = Integer.parseInt(a.getSelectedItem());
	int gg = Integer.parseInt(b.getSelectedItem());
	int bb = Integer.parseInt(c.getSelectedItem());
        repaint();
    }
}
