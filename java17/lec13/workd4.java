import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.util.Calendar;

public class workd4 extends Applet implements ActionListener {
    Button b1 = new Button("現在時刻");
    Checkbox ck = new Checkbox("２４時刊表示");
    String current = null;
    
    public void init() {
        add(ck);
        b1.addActionListener(this); add(b1);
    }
    
    public void paint(Graphics g) {
	if(current!=null){
	  g.setFont(new Font("Serif",Font.BOLD,36));
	  g.drawString(current, 60, 70);
	}
    }
    
    public void actionPerformed(ActionEvent e) {
	Calendar cal = Calendar.getInstance();
	int hr;
	int mn = cal.get(Calendar.MINUTE);
	String ap = "";

        if (ck.getState()) {
         hr = cal.get(Calendar.HOUR_OF_DAY);
        } else {
	 hr = cal.get(Calendar.HOUR);
        }
	

	if(Calendar.AM_PM==Calendar.AM){
	  ap = "AM";
	} else {
	  ap = "PM";
	}
	if(!ck.getState()){
	 ap = "";
	}

	current = hr + ":" + mn + " " + ap;
        repaint();
    }
}
