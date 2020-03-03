import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class workb5 extends Applet implements ActionListener {
    TextField aField, wField;
    Button wowButton;
    PacManb5 pacman;

    // init メソッドを作成する
    public void init() {
        aField = new TextField("", 3);
        add(aField);

	wField = new TextField("",10);
	add(wField);

        wowButton = new Button("WOW");
        wowButton.addActionListener(this);
        add(wowButton);

        pacman = new PacManb5(20, 40, 100);
    }

    // paint メソッドを作成する
    public void paint(Graphics g) {
        aField.setText("" + pacman.getAngle());
	wField.setText("" + pacman.getWord());
        pacman.draw(g);
    }

    // actionPerformed メソッドを作成する
    public void actionPerformed(ActionEvent e) {

        int angle = Integer.parseInt(aField.getText());
	String w = wField.getText();
        pacman.setAngle(angle);
	pacman.setWord(w);

        repaint();
    }
}
