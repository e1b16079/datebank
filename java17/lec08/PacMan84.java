import java.awt.*;

class PacMan84 {
    private int x, y, size;

    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    PacMan84(int x0, int y0, int s0){
	x = x0; y = y0; size = s0;
    }

    PacMan84(int x0, int y0){
	x = x0; y = y0; size = 60;
    }

    void draw(Graphics g) {
        g.setColor(Color.pink);
        g.fillArc(x, y, size, size, 45, 300);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }
}
