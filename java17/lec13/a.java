import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class a extends Applet implements ActionListener {
    Button b1 = new Button("色の交換");
    
    public void init() {
        setBackground(Color.magenta);    // 背景色の設定
        
        Font f1 = new Font("Serif", Font.BOLD, 18);
        
        b1.setFont(f1);                  // フォントの設定
        b1.setBackground(Color.blue);    // ボタンの背景色の設定
        b1.setForeground(Color.yellow);  // ボタンの前景色の設定
        b1.addActionListener(this);
        add(b1);
    }
    
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == b1) {
            Color tmp = b1.getBackground();
            
            b1.setBackground(b1.getForeground());
            b1.setForeground(tmp);
        }
        repaint();
    }
}
