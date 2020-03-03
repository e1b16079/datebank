import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class MovePoint extends Applet implements ActionListener {
    Button leftButton, rightButton;
    Point p1 = new Point(125, 60);

    public void init() {
        leftButton = new Button("left"); add(leftButton);
        leftButton.addActionListener(this);

        rightButton = new Button("right"); add(rightButton);
        rightButton. addActionListener(this);

    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource()== leftButton) {
            p1.translate(-10, 0);
        } else {
            p1.translate (10, 0);
        }

        repaint();
    }

    public void paint(Graphics g) {
        g.setColor(Color.red);
        g.fillOval(p1.x - 5, p1.y - 5, 10, 10);
    }
}
