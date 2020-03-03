import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workb2 extends Applet implements ActionListener {
    Button leftButton, rightButton;
    Point p1 = new Point(125, 110);
    Point p0 = new Point(125, 80);
    TextField disField;


    public void init() {
        leftButton = new Button("left"); add(leftButton);
        leftButton.addActionListener(this);

        rightButton = new Button("right"); add(rightButton);
        rightButton. addActionListener(this);

	disField = new TextField(""+p0.distance(p1),20);add(disField);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource()== leftButton) {
            p1.translate(-10, 0);
        } else {
            p1.translate (10, 0);
        }

	disField.setText(p0.distance(p1)+"");


        repaint();
    }

    public void paint(Graphics g) {
	g.drawLine(p0.x,p0.y,p1.x,p1.y);

        g.setColor(Color.red);
        g.fillOval(p0.x - 5, p0.y - 5, 10, 10);
        g.setColor(Color.green);
        g.fillOval(p1.x - 5, p1.y - 5, 10, 10);
    }
}
