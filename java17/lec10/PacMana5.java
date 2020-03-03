import java.awt.*;

public class PacMana5 {
    protected int x, y, size;
    protected boolean open = false;	// 口の状態。初期値は「閉じた」状態
    protected int angle = 4;            // 口を開ける角度

    // ３引数のコンストラクタ
    PacMana5(int x0, int y0, int s0) {
        setData(x0, y0, s0);
    }

    // パックマンの始点 (x, y) と大きさ size を変更する
    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    // (1) 口の状態 open を反転する。状態に対応した口の角度 angle を設定する
    void changeMouth() {

	open=!open;

	if(open==true){
	angle=4;
	}
	else{
	angle=60;
	}






    }

    // (2) 始点 (x, y) で大きさ size のパックマンを描く。角度 angle の口を描く。
    void draw(Graphics g) {
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, angle * 3 / 4, 360 - angle);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);



    }
}
