#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void opening(void)
{
     printf("======\n");
     printf(" SG\n");
     printf("======\n");
     
}

int main(int argc, char *argv[])
{
  srand (( unsigned)time(NULL));
  
  //0. opening
  opening();
  
  //1. 초기화& 플레이어 이름 결정
  
  //2. 반복문 (플레이어 턴)
       //2-1. 플레이어의 상태 출력
       //2-2. 주사위 던지기
       //2-3. 이동
       //2-4. 동전 줍기
       //2-5. 다음 턴
       
   
  
  system("PAUSE");	
  return 0;
}
