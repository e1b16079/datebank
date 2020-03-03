class work76 {
    public static void main(String[] args) {
	GeoPoint76 p1 = new GeoPoint76();
	GeoPoint76 p2 = new GeoPoint76();
	GeoPoint76 p3 = new GeoPoint76();

	p1.setData("金閣寺",-2.9,1.7);
	p2.setData("銀閣寺",3.3,0.3);
	p3.setData("京都駅",0.2,-4.2);


	p1.show();
	p2.show();
	p3.show();


	p1.distanceInfo();
	p1.distanceInfo(p2);
	p2.distanceInfo();
	p2.distanceInfo(p3);
	p3.distanceInfo();
	p3.distanceInfo(p1);

    }
}
