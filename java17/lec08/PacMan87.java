import java.awt.*;

class PacMan87 {
    private int x, y, size;

    void setData(int x0, int y0, int s0) {
        x = x0; y = y0; size = s0;
    }

    PacMan87(int x0, int y0, int s0){
	x = x0; y = y0; size = s0;
    }

    PacMan87(int x0, int y0){
	x = x0; y = y0; size = 60;
    }

    void draw(Graphics g) {
        g.setColor(Color.pink);
        g.fillArc(x, y, size, size, 45, 300);
        g.setColor(Color.black);
        g.fillOval(x + size / 2, y + size / 12, size / 6, size / 6);
    }

    void move(int dx, int dy){
	x=x+dx; y=y+dy;
    }

    void move(int d){
	move(d,d);
    }

    void enLarge(double mag){
	size = (int)(size*mag);
    }

    void enLarge(){
	enLarge(1.1);
    }

}
