import java.awt.*;
import java.applet.*;
/* (1) ここに必要なのは？ */
import java.awt.event.*;

public class worka2 extends Applet implements ActionListener  {
    Button upButton;
    Font font;

    int paint = 0;              // paintメソッドが呼ばれた回数。変更しない
    int count = 0;              // 「add3」ボタンで３を足す。変更しない

    public void init() {
        font = new Font("Serif", Font.BOLD, 72);

        /* (3) ここに必要なのは？ */
	upButton= new Button("Add3");
	add(upButton);
	upButton.addActionListener(this);


        count = 11;
    }

    // paint メソッドは変更しない
    public void paint(Graphics g) {
        paint++;

        g.setFont(font);
        g.drawString(String.valueOf(paint) + " : " + String.valueOf(count), 20, 100);
    }

    public void actionPerformed(ActionEvent e) {
        /* (5) ここに必要なのは？ */
	count = count + 3;
        repaint();              // 消してはいけません！
    }
}
