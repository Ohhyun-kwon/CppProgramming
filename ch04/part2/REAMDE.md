## Q1. 매크로상수 NULL이 무엇인지 조사하라, C/C++언어에서 정의의 차이, 정의된 헤더파일, 사용용도 등.
A1. NULL은 어떤 객체도 가리키지 않는 포인터 값을 표현하려고 쓰는 이름. 포인터가 아무 것도 가리키지 않음을 표시하거나 유효한 대상 없음을 경우 반환값으로 쓰임. C: <stddef.h> C++: <cstddef>

## Q2. 널문자와 NULL의 차이를 설명하시오, 정의, 자료형, 메모리크기, 실제값, 사용용도 등.
A2. 널문자는 문자열의 끝을 뜻하는 문자이고 char 타입 문자 리터럴로 취급, char 크기이기에 1바이트. NULL은 포인터가 유효한 대상을 가르키지 않음을 나타내는 매크로, 매크로이기에 타입이 달라질 수 있음, 크기를 따질 수 없음.

## Q3. 요즘은 NULL 대신에 nullptr을 사용하는데 nullptr은 무엇인지 조사하시오.
A3. 전용 널 포인터. 어떠한 포인터 타입으로도 안전하게 변환될 수 있음. 타입 안정성 보장.


<br>
<br>

# 실행 결과  
<img width="508" height="265" alt="image" src="https://github.com/user-attachments/assets/23ecb319-55c4-4063-a90a-b640ae2c7b78" />
<img width="506" height="232" alt="image" src="https://github.com/user-attachments/assets/185d373d-7078-4a3e-9891-ff21d692c607" />
<img width="538" height="110" alt="image" src="https://github.com/user-attachments/assets/a12d07d7-7609-45ff-80e5-0df0383fca88" />
