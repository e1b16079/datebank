import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.util.*;

public class workb4 extends Applet implements ActionListener {
    TextField fwyear, fseireki, fgengo;
    Button button;

    public void init() {
        fseireki = new TextField("", 5);   add(fseireki);

        button = new Button("変換");
        button.addActionListener(this); add(button);

        fgengo = new TextField("", 5);  add(fgengo);

        fwyear = new TextField("", 5);    add(fwyear);
    }


	public void paint(Graphics g) {
	String input = fseireki.getText();
	if(! input.equals("")){
	  g.drawString(input,20,80);
	}
	}

    public void actionPerformed(ActionEvent e) {
	String input = fseireki.getText();
	if ( ! input.equals("") ) {
	int age = Integer.parseInt(fseireki.getText());
	  if(1925<age && age<1989){
	  fgengo.setText("昭和");
	  fwyear.setText(age-1925+"");
	  }

	  if(1988<age){
	  fgengo.setText("平成");
	  fwyear.setText(age-1988+"");
	  }

	
	}
	repaint();
}

}
