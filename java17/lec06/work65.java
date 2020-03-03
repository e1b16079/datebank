public class work65 {
   public static void main(String[] args) {
        EMCard65 myCard = new EMCard65();

	myCard.show();
	myCard.pay(3000);
	myCard.pay(240);
	myCard.show();
	myCard.charge(5000);
	myCard.show();
	myCard.pay(2100);
	myCard.show();
   }
}
