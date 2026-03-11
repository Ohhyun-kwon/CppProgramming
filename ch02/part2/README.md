## Q1. 라이브러리는 헤더파일과 목적파일로 구성되어 있다. 헤더파일과 목적파일에 들어 있는 내용이 무엇인지 각각 설명하시오.
A1. 헤더파일에는 라이브러리에 포함된 함수나 객체의 선언이 들어 있다. 함수의 이름, 반환형, 매개변수와 같은 정보가 선언되어 있으 컴파일러가 해당 함수나 객체를 사용할 수 있도록 알려주는 역할을 한다. 
반면 목적파일에는 실제로 함수가 동작하는 구현 코드가 들어 있다. 목적파일은 컴파일 과정을 통해 생성된 기계어 코드로 구성되어 있으며, 프로그램을 링크하는 단계에서 실행 파일에 결합된다.

## Q1. 함수의 선언, 정의, 호출은 각각 어디에 존재하는가?
A2. 함수의 선언은 헤더파일에 존재하며, 함수의 이름과 반환형, 매개변수의 형태를 컴파일러에게 알려주는 역할을 한다.
함수의 정의는 실제 함수의 동작을 구현한 코드로, 소스파일이나 라이브러리의 목적파일 안에 존재한다.
함수의 호출은 프로그램에서 해당 함수를 실제로 사용하는 부분으로, 보통 main() 함수나 다른 함수 내부에서 이루어진다.

## Q1. <iostream> 헤더파일에 cin, cout은 extern 변수로 선언되어 있다. extern 선언과 변수선언의 차이를 설명하라. 그리고, 그럼 cin, cout 의 변수선언은 어디에 있는가?
A3. extern 선언은 변수의 실제 정의가 다른 파일에 존재한다는 것을 알리는 선언이다. 즉 해당 변수의 메모리 공간을 여기서 생성하는 것이 아니라 다른 곳에 이미 정의되어 있는 변수를 사용하겠다는 의미이다.
반면 일반적인 변수 선언은 변수의 실제 메모리 공간을 생성하는 정의를 의미한다.
이는 cin과 cout 객체가 다른 파일에서 실제로 정의되어 있음을 의미하고, 실제 변수 정의는 C++ 표준 라이브러리의 구현 파일에 존재한다.

## 라이브러리 함수나 객체를 사용하기 전에 헤더파일을 include하는 이유를 설명하라.
A4. 컴파일러는 프로그램을 번역할 때 함수의 이름, 반환형, 매개변수의 형태 등을 알아야 올바르게 코드를 해석할 수 있기에 헤더파일을 통해 컴파일러에 정보를 알려주기 위함이다.

<br>
<br>

# 실행 결과  
<img width="226" height="34" alt="image" src="https://github.com/user-attachments/assets/83fe8c47-cea4-4ed1-96e8-eafad140c4e1" />
<img width="306" height="104" alt="image" src="https://github.com/user-attachments/assets/58b49c81-add4-45a6-96dc-c68ae3fd500e" />
<img width="383" height="37" alt="image" src="https://github.com/user-attachments/assets/d562e8e0-5f50-4025-a3e3-d2206f6cacf3" />
<img width="254" height="36" alt="image" src="https://github.com/user-attachments/assets/1f611b01-1477-4e0e-ab0b-778e7e24d079" />
<img width="408" height="134" alt="image" src="https://github.com/user-attachments/assets/afd9d34f-6513-4093-9762-b1f7addbf435" />
