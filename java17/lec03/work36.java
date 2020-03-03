import java.awt.*;
import java.applet.*;

public class work36 extends Applet {
  public void paint(Graphics g) {
	int sum=0, x=10, y=50;
	String list=" ";

	g.drawLine(10,25,10,75);
	g.drawLine(200,25,200,75);
	g.drawLine(10,50,200,50);


	while(sum<190){
	int num=10*(int)(Math.random()*5)+10;
	list=list+"/"+num;
	sum=sum+num;
	if(sum>190){
        g.setColor(Color.yellow);
	}
	g.drawOval(x,y-num/2,num,num);
	x=x+num;

	}

	g.drawString("sum="+sum+list,10,20);

}
}
