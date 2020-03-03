import java.awt.*;
import java.applet.*;
import java.util.*;

public class work28 extends Applet {

  public void paint(Graphics g){
    Calendar cal = Calendar.getInstance();
    int s = cal.get(Calendar.SECOND);

   int retu = 10 + s % 10;
   int gyou = 19 - s % 10;

   setBackground(Color.lightGray);

   g.setColor(Color.black);
   g.fillRect(20,20,gyou*20-5,retu*20-5);

   //青
   for(int i=1;i<=gyou;i=i+3){
    for(int j=1;j<=retu;j=j+3){
      g.setColor(Color.blue);
      g.fillRect(i*20,j*20,15,15);
    }
   }

   //緑
   for(int i=1;i<=gyou;i=i++){
    if(i%3==1){
    for(int j=2;j<=retu;j=j+3){
      g.setColor(Color.green);
      g.fillRect(j*20,i*20,15,15);
      g.fillRect((j+1)*20,i*20,15,15);



























   }
}
