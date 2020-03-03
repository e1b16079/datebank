// ここに必要なのは？
import java.awt.*;

class PacMan73 {
    // 必要なフィールドは？
    private int x=0;
    private int y=0;
    private int size=0;

    // 必要なメソッドは？
    void setData(int x0, int y0, int s0){
	x=x0;
	y=y0;
	size=s0;
    }


    void draw(Graphics g){
    /*  draw メソッドの中身は，おなじみの次のコードです。*/
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, 45, 300);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }  

}


