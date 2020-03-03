import java.awt.*;
import java.applet.*;
import java.awt.event.*;
import java.util.*;

public class HowOld extends Applet implements ActionListener {
    TextField fyear, fage;

    public void init() {
        fyear = new TextField("", 4);
        add(fyear);
        fyear.addActionListener(this);

        fage = new TextField("", 4);
        add(fage);
    }

    public void actionPerformed(ActionEvent e) {
        Calendar now = Calendar.getInstance();
        int nowYear = now.get(Calendar.YEAR);
        int birthyear = Integer.parseInt(fyear.getText());

        fage.setText((nowYear - birthyear) + "才");
    }
}
