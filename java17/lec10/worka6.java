import java.awt.*;
import java.applet.*;
/* (1) ここに必要なのは？ */

public class worka6 extends Applet /* (2) ここに必要なものは？ */ ActionListener {
    Button mouth, tongue;
    PacMana6 pacman;

    public void init() {
        // (3) ボタン「くち」と「した」を生成し、イベントリスナーを設定し、アプレットに登録する






        // (4) PacMana6クラスのインスタンス pacman を生成する


    }

    public void paint(Graphics g) {
        // (5) パックマン pacman を描画する


    }

    // (6) 「くち」ボタンまたは「した」ボタンが押された場合、パックマンpacmaの対応するメソッドを呼ぶ
    public void actionPerformed(ActionEvent e) {






        repaint();              // 消してはいけません！
    }
}
