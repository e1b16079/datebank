import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.util.*;

public class workb1 extends Applet implements ActionListener {
    TextField fyear, fage;

    public void init() {
        fage = new TextField("", 4);
        add(fage);        
	fage.addActionListener(this);

	fyear = new TextField("", 24);
        add(fyear);
        
    }

    public void actionPerformed(ActionEvent e) {
        Calendar now = Calendar.getInstance();
        int nowYear = now.get(Calendar.YEAR);
        int age = Integer.parseInt(fage.getText());

        fyear.setText(age+"才の人は"+(nowYear - age) + "年生まれです。");
    }
}
