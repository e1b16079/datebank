import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workd3 extends Applet implements ActionListener {
    Button b1 = new Button("red");
    Button b2 = new Button("green");
    Button b3 = new Button("blue");
    TextField t1 = new TextField("", 5);

    public void init() {

        Font f1 = new Font("Serif", Font.BOLD, 18);
	setFont(f1);

        b1.addActionListener(this);
        add(b1);
	b2.addActionListener(this);
        add(b2);
	b3.addActionListener(this);
        add(b3);

	add(t1);

    }
    
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
          t1.setForeground(Color.red);
	  t1.setText("red");
	} else if(e.getSource() == b2){
          t1.setForeground(Color.green);
	  t1.setText("green");
	} else if(e.getSource() == b3){
          t1.setForeground(Color.blue);
	  t1.setText("blue");
        }
        repaint();
    }
}
