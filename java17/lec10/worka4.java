import java.awt.*;
import java.applet.*;
/* (1) ここに必要なのは？ */
import java.awt.event.*;

public class worka4 extends Applet implements ActionListener  {
    boolean open = false;
    Button mouth;

    public void init() {

	mouth= new Button("くち");
	mouth.addActionListener(this);
        add(mouth);


    }

    public void paint(Graphics g) {
        int x = 75, y = 40, size = 100;
        int angle;              // 口を開ける角度

        // (4) 口を閉じるときは angle = 4、口を開けるときは angle = 60 に設定する
	if(open==true){
	angle=4;
	}
	else{
	angle=60;
	}





        // 次のパックマンを描くコードを変更してはいけません。
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, angle * 3 / 4, 360 - angle);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }

    public void actionPerformed(ActionEvent e) {
        if(open==true){
	 open=false;
	}
	else{
	open=true;
	}


        repaint();              // 消してはいけません！
    }
}
