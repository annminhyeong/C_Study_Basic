#include <stdio.h>



int main()
{	
	int count = 0;

	while (1)
	{
		printf("Current count is %d. Continue? (y / n)\n", count);
		int c = getchar();
		
		if (c == 'n')
			break;
		else if (c == 'y')
			count++;
		else
			printf("Please input y or n\n");
		
		while (getchar() != '\n')
			continue;
	}

	return 0;
}
//getchar함수를 만나면 일단
//getchar함수는 Buffer에 값이 있는지 없는지 확인한다.
//
//만약 Buffer에 비어 있다면
//\n까지 또는 Buffer크기만큼 "입력받고" Buffer값을 저장한다.
//맨 앞 값의 값을 getchar함수에게 결과값으로 반환한다.
//
//만약 Buffer에 비어 있지 않다면
//"입력을 받지 않고" Buffer에 저장되어 있는 값을 차례대로 꺼낸다
//
//-- - 예시-- -
//1. 첫번째 getchar함수를 만남
//2. getchar함수는 버퍼가 비어있는지 확인한다.
//3. 버퍼가 비어있으므로 입력을 받는다(입력값 YES)
//4. 버퍼에 값을 저장한다 = > Buffer[Y, E, S, \n]
//5. getchar함수에게 버퍼 맨 앞 값을 반환한다. = > 반환값 Y, Buffer[E, S, \n]
//
//
//1. 두번째 getchar함수를 만남
//2. getchar함수는 버퍼가 비어있는지 확인한다.
//3. 버퍼가 비어있지 않으므로 입력받지 않고 버퍼에 저장된 값을 꺼낸다
//= > 반환값 : E, Buffer : [S, \n]
//
//
//1. 세번째 getchar함수를 만남
//2. getchar함수는 버퍼가 비어있는지 확인한다.
//3. 버퍼가 비어있지 않으므로 입력받지 않고 버퍼에 저장된 값을 꺼낸다
//= > 반환값 : S, Buffer : [\n]
//
//
//1. 네번째 getchar함수를 만남
//2. getchar함수는 버퍼가 비어있는지 확인한다.
//3. 버퍼가 비어있지 않으므로 입력받지 않고 버퍼에 저장된 값을 꺼낸다
//= > 반환값 : \n, Buffer : []
//
//
//1. 다섯번째 getchar함수를 만남
//2. getchar함수는 버퍼가 비어있는지 확인한다.
//3. 버퍼가 비어있으므로 입력을 받는다(입력값 홍정모)
//4. 버퍼에 값을 저장한다 = > Buffer[홍, 정, 모, \n]
//5. getchar함수에게 버퍼 맨 앞 값을 반환한다. = > 반환값 홍, Buffer[정, 모, \n]



