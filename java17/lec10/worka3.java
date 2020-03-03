import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class worka3 extends Applet implements ActionListener {
    int count = 0;
    Font font;
    Button upButton, downButton;
    int delta = 1;
    String a;

    public void init() {
        font = new Font("Serif", Font.BOLD, 72);

        upButton = new Button("↑↓");
        upButton.addActionListener(this);
        add(upButton);

        downButton = new Button("実行");
        downButton.addActionListener(this);
        add(downButton);
    }

    public void paint(Graphics g) {

	if(delta==1){
	a="↑";
	}
	else{
	a="↓";
	}

        g.setFont(font);
        g.drawString(String.valueOf(count)+String.valueOf(a), 80, 100);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == upButton) {
            delta=delta*-1;
        } else if (e.getSource() == downButton) {
            count=count+delta;
        }
        repaint();
    }
}
