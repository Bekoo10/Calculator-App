package Hesapmakinesi;

public class İslemler {
	protected static double Toplama(String a, String b) {
		Double sayi1 = Double.valueOf(a);
		Double sayi2 = Double.valueOf(b);
		double toplam = sayi1 + sayi2;
		return toplam;
	}

	protected static Double Cikarma(String a, String b) {
		Double sayi1 = Double.valueOf(a);
		Double sayi2 = Double.valueOf(b);
		Double fark = sayi1 - sayi2;
		return fark;
	}

	protected static Double Bolme(String a, String b) {
		Double sayi1 = Double.valueOf(a);
		Double sayi2 = Double.valueOf(b);
		Double bolum = sayi1 / sayi2;
		return bolum;
	}

	protected static Double Carpma(String a, String b) {
		Double sayi1 = Double.valueOf(a);
		Double sayi2 = Double.valueOf(b);
		Double carpım = sayi1 * sayi2;
		return carpım;
	}

	protected static Double Us(String a, String b) {
		Double sayi1 = Double.valueOf(a);
		Double sayi2 = Double.valueOf(b);
		Double us = Math.pow(sayi1, sayi2);
		return us;
	}

}
