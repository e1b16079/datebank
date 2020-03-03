import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workd6 extends Applet implements ItemListener {
    Choice ch = new Choice();
    String[] name = {"black", "gray", "orange", "pink","red"};
    Color colors[] = {Color.black,Color.gray,Color.orange,Color.pink,Color.red};
    int selected = 0;
    
    public void init() {
        for (int i = 0; i < name.length; i++)
            ch.add(name[i]);
        
        ch.select("black"); add(ch);
        ch.addItemListener(this);
    }
    
    public void paint(Graphics g) {
	g.setClor(colors[selected]);
        Font sampleFont = new Font("Serif", PLAIN, 36);
        
        g.setFont(sampleFont);
        g.drawString("Sample Text", 20, 80);
    }
    
    public void itemStateChanged(ItemEvent e) {
        String selected = ch.getSelectedItem();
        
        repaint();
    }
}
