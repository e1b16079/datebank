import java.awt.*;

class PacMan84 {
    protected int x, y, size; // private -> protected に変更

    PacMan84(int x0, int y0, int s0) {
        setData(x0, y0, s0); // x = x0; y = y0; size = s0; より良い
    }

    PacMan84(int x0, int y0) { // this に変更
        this(x0, y0, 60); // setData(x0, y0, 60); や x = x0; y = y0; size = 60; より良い
    }

    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    void draw(Graphics g) {
        g.setColor(Color.pink);
        g.fillArc(x, y, size, size, 45, 300);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }
}
