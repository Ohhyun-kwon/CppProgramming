## Q1. 전처리 또는 선행처리 단계를 설명하라.
A1. 편집 -> 컴파일 -> 링크 -> 실행 과정 중 컴파일 이전에 처리되는 단계이며, #으로 시작하는 전처리 지시문을 처리한다. 

## Q2. 객체 cin, cout은 어디에 선언되어 있는가?
A2. cin과 cout 객체는 표준 입출력을 처리하기 위한 객체이며, iostream 헤더 파일안 std 네임스페이스 안에 선언되어 있어 표준 입력과 출력 역할을 한다.  
<img width="535" height="616" alt="image" src="https://github.com/user-attachments/assets/c535c7e4-77ea-44ab-b01a-1594c76dd145" />

## Q3. 프로그램을 링크할때 이름 충돌이 발생하는 경우를 설명해보라. 
A3. 링크 과정에서 서로 다른 파일에 동일한 이름의 함수나 전역 변수가 정의되어 있을 경우 이름 충돌이 발생할 수 있다.

## Q4. 스트림이란 무엇인가?
A4. 스트림은 프로그램과 입출력 장치 사이에서 데이터가 흐르는 통로를 의미하며, 일반적으로 버퍼라는 임시 저장 공간을 사용하여 데이터를 처리하기도 한다.

## Q5. 표준 출력 스트림을 정의할 때 사용하는 C언어 자료형은?
A5. C 언어에서 표준 출력 스트림은 stdio.h 라이브러리에 정의된 FILE 구조체를 사용하여 표현된다. 표준 출력은 stdout이라는 이름의 스트림으로 제공되며, 내부적으로는 FILE 자료형을 통해 관리된다. printf 함수와 같은 함수를 사용하여 화면으로 데이터를 출력할 수 있다.

## Q6. 표준 출력 스트림을 정의할 때 사용하는 C++언어 자료형은?
A6. C++에서 입출력 기능을 객체 지향적으로 구현하기 위해 스트림 클래스를 사용한다. 표준 출력 스트림은 iostream 라이브러리에 정의된 ostream 클래스 객체로 표현되며, 대표적인 객체가 cout이다. cout은 << 연산자를 사용하여 다양한 자료형의 데이터를 화면에 출력할 수 있도록 설계되어 있다.

<br>
<br>

# 실행 결과  
<img width="222" height="87" alt="image" src="https://github.com/user-attachments/assets/b7e5f612-fc91-4531-9735-7532e4b78ded" />
<img width="184" height="74" alt="image" src="https://github.com/user-attachments/assets/81d343a6-7c7d-45d1-8ec1-69392dab8bdc" />
<img width="86" height="153" alt="image" src="https://github.com/user-attachments/assets/6b74f298-a4e5-4cb7-8128-e54913ac2716" />
<img width="50" height="85" alt="image" src="https://github.com/user-attachments/assets/5eab28f3-a305-4b49-b23f-027ae15b27f0" />
