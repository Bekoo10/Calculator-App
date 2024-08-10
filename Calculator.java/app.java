package Hesapmakinesi;

import java.util.Scanner;

public class arayüz {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		İslemler nesne = new İslemler();
		boolean kontrol = false;
		System.out.println("*****Hesap Makinesine hoşgeldiniz*****\n");

		while (kontrol == false) {
			System.out.print("\nProgramdan çıkmak istiyorsanız 'Exit' yazabilirsiniz."
					+ "\nLütfen yapmak istediğiniz işlemi giriniz: ");

			String islem = scanner.nextLine().trim();

			if (islem.equalsIgnoreCase("Exit")) {
				System.out.println("\nProgramdan çıkış yapılmıştır.");
				kontrol = true;
				break;
			}

			
			int OperatörIndeksi = -1;
			char[] operatörler = { '+', '-', '*', '/', '^' };

			
			for (char op : operatörler) {
				OperatörIndeksi = islem.indexOf(op);
				if (OperatörIndeksi != -1) {
					break;
				}
			}

			
			if (OperatörIndeksi == -1) {
				System.out.println("\nYanlış bir işlem yaptınız, lütfen tekrar deneyiniz.");
				continue;
			}

			String sayi1 = islem.substring(0, OperatörIndeksi).trim();
			String operatör = islem.substring(OperatörIndeksi, OperatörIndeksi + 1);
			String sayi2 = islem.substring(OperatörIndeksi + 1).trim();

			if (operatör.equals("+")) {
				System.out.println("\nGirmiş olduğunuz işlemin sonucu: " + nesne.Toplama(sayi1, sayi2));
			} else if (operatör.equals("-")) {
				System.out.println("\nGirmiş olduğunuz işlemin sonucu: " + nesne.Cikarma(sayi1, sayi2));
			} else if (operatör.equals("*")) {
				System.out.println("\nGirmiş olduğunuz işlemin sonucu: " + nesne.Carpma(sayi1, sayi2));
			} else if (operatör.equals("/")) {
				if (sayi2.equals("0")) {
					System.out.println("\n0 değerine bölünemez.");
				} else {
					System.out.println("\nGirmiş olduğunuz işlemin sonucu: " + nesne.Bolme(sayi1, sayi2));
				}
			} else if (operatör.equals("^")) {
				System.out.println("\nGirmiş olduğunuz işlemin sonucu: " + nesne.Us(sayi1, sayi2));
			} else {
				System.out.println("\nYanlış bir işlem yaptınız, lütfen tekrar deneyiniz.");
			}
		}

	}
}
