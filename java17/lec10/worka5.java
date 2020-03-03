import java.awt.*;
import java.applet.*;
/* (1) ここに必要なのは？ */
import java.awt.event.*;

public class worka5 extends Applet implements ActionListener  {
    Button mouth;
    PacMana5 pacman;

    public void init() {
        /* (3) ここに必要なのは？ */
	mouth= new Button("くち");
	mouth.addActionListener(this);
        add(mouth);

	PacMana5 pacman= new PacMana5(75,40,100);

        /* (4) 始点が (75, 40) で大きさが 100 のパックマンを生成する */

    }

    public void paint(Graphics g) {
        pacman.draw(g);
    }

    public void actionPerformed(ActionEvent e) {
        pacman.changeMouth();

        repaint();              // 消してはいけません！
    }
}
