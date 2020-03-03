import java.awt.*;

public class PacManbA {
    protected int x, y, size;
    protected int angle = 10;            // 口を開ける角度

    // ３引数のコンストラクタ
    PacManbA(int x0, int y0, int s0) {
        setData(x0, y0, s0);
    }

    // パックマンの始点 (x, y) と大きさ size を変更する
    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    // パックマンの角度 angle を変更する
    void setAngle(int a0){
        angle = Math.max(10, Math.min(a0, 100)); // 10 〜 100 にする
    }

    // 角度 angle を返す
    int getAngle(){
        return angle;
    }

    //  始点 (x, y) で大きさ size のパックマンを描く。口を角度 angle で描く
    void draw(Graphics g) {
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, angle * 3 / 4, 360 - angle);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }
}
