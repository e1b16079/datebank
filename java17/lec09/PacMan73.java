import java.awt.*;

class PacMan73 {
    protected int x, y, size; // private -> protected 変更

    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    void draw(Graphics g) {
        g.setColor(Color.yellow);
        g.fillArc(x, y, size, size, 45, 300);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }
}
