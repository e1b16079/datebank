import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workd5 extends Applet implements ItemListener {
    CheckboxGroup cgroup = new CheckboxGroup();
    Checkbox c0, c1, c2;
    String[] names = {"Serif, SansSerif, MonoSpaced"};
    Checkbox selected;
    
    public void init() {
	c0 = new Checkbox("Serif", cgroup, true);
	c0.addItemListener(this);add(c0);

	c1 = new Checkbox("SansSerif",cgroup, false);
	c1.addItemListener(this);add(c1);
        
	c2 = new Checkbox("MonoSpaced",cgroup, false);
	c2.addItemListener(this);add(c2);

        selected = cgroup.getSelectedCheckbox();
    }

    public void paint(Graphics g) {
	String name = selected.qetLabel();
	Font f1 = new Font(name, Font.PLAIN,36);
	g.setFont(f1);
	g.drawString(name,20,80);
    }
    
    public void itemStateChanged(ItemEvent e) {
        selected = cgroup.getSelectedCheckbox();
        repaint();
    }
}
