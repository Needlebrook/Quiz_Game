#include <stdio.h>
int score=0;
int main(void){
	char ARR[]={'D','A','B','C','B'};
	char arr[]={'d','a','b','c','b'};
	char choi;
	printf("Welcome to the quiz show!");
	printf("First question!\n Who was the first prime minister of India?\n");
	printf("A.Mahatma Gandhi  B.Droupadi Murmu\n");
	printf("C.Rajeev Gandhi   D.Jawaharlal Nehru\n");
	scanf(" %c",&choi);
	while (getchar() != '\n');
	if (choi==arr[0]|| choi==ARR[0]){
	
		printf("Congrats, Jawaharlal Nehru is the correct answer!\n");
		score++;
		}
	else
		printf("Wrong answer but no matter.Jawaharlal Nehru is the answer\n");

	
	
	printf("Second question!\n Which city is the capital city of China?\n");
	printf("A.Beijing  B.Shanghai\n");
	printf("C.Wuhan    D.Singapore\n");
	scanf("  %c",&choi);
	while (getchar() != '\n');
	if (choi==arr[1]|| choi==ARR[1]){
		printf("Congrats, Beijing is the correct answer!\n");
		score++;
		}
	else
		printf("Wrong answer but no matter. Beijing is the answer!\n");

	
	printf("Third question!\n Find the odd one out\n");
	printf("A.Courageous  B.Demolish\n");
	printf("C.Intrepid    D.Dauntless\n");
	scanf(" %c",&choi);
	while (getchar() != '\n');
	if (choi==arr[2]|| choi==ARR[2]){
	
		printf("Congrats, Demolish is the correct answer!\n");
		score++;
	}
	else
		printf("Wrong answer but no matter. Demolish is the answer!\n");

	
	printf("Fourth question!\n What is the chemical symbol for Lead?\n");
	printf("A.Ag   B.Lr\n");
	printf("C.Pb   D.Au\n");
	scanf(" %c",&choi);
	while (getchar() != '\n');
	if (choi==arr[3]|| choi==ARR[3]){
		printf("Congrats, Pb is the correct answer!\n");
		score++;
	}
	else
		printf("Wrong answer but no matter. Pb is the answer!\n");

	
	printf("Fifth question!\n World War II ended in which year?\n");
	printf("A.1939  B.1945\n");
	printf("C.1898  D.1958\n");
	scanf(" %c",&choi);
	while (getchar() != '\n');
	if (choi==arr[4]|| choi==ARR[4]){
		printf("Congrats, 1945 is the correct answer!\n");
		score++;
	}
	else
		printf("Wrong answer but no matter. 1945 is the answer!\n");
	
	printf("the results are in! Your score is %d/5!",score);
}

