package Ex08.java;

import java.util.Scanner;

public class Ex08 {
	
	public static void main(String[] args) {
		boolean run = true;
		Scanner sc = new Scanner(System.in);
		
		int save = 0;
		int outMoney= 0;
		int myMoney = 0;
		
		while(run) {
			System.out.println("-------------------------------");
			System.out.println("1.예금 | 2.출금 | 3.잔고 | 4.종료");
			System.out.println("-------------------------------");
			System.out.printf("선택>");
			
			int chose = sc.nextInt();
			
			switch(chose) {
			case 1 :
				System.out.printf("입금액>");
				save = sc.nextInt();
				myMoney =  myMoney + save;
				break;
				
			case 2 : 
				System.out.printf("출금액>");
				outMoney = sc.nextInt();
				if(0 <= myMoney - outMoney) {
				myMoney = myMoney - outMoney;
				} else {
					System.out.printf("잔액이 부족합니다.\n");
				}
				break;
			
			case 3 : 
				System.out.printf("잔고>");
				System.out.printf("%d\n", myMoney);
				break;
				
			case 4 : run = false;
			System.out.printf("프로그램을 종료합니다.");
			break;
			
			default : System.out.printf("1~4 까지 숫자만 입력해 주십시오.\n");
			continue;
			}
		}
	}
	
}
