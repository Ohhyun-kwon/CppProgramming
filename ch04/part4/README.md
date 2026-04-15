## Q1. string 객체는 문자열 입력 받을 때 몇 자를 입력할지 물어 보지않고 알아서 크기를 자동 조절한다. 동작 원리를 검색해보고 설명하라.
A1. 내부적으로 동적할당을 받아 문자열의 길이를 자동으로 조절하도록 구현되어있음. string 객체 내부에 버퍼를 가지고 일정 크기를 스택 또는 배열에 저장. 문자 입력 시 버퍼에 저장하고 초과할 경우 힙에 재할당. 재할당 시 여유 있게 1.5배~2배 정도 받음. 이후 새 메모리로 복사.

## Q2. 문자열을 입력할 때 마지막에 입력하는 엔터키와 getline 함수의 마지막 인자에 전달하는 구분문자와 차이를 설명하라.
A2. getline 에서 \n 은 구분문자로 사용되며, 입력의 끝을 나타내는 문자임. \n 는 문자열 입력 시 엔터키를 통해 입력되는 문자.


<br>
<br>

# 실행 결과  
<img width="553" height="230" alt="image" src="https://github.com/user-attachments/assets/70adf82f-d4d2-430b-9980-2db33d5983f3" />
<img width="323" height="69" alt="image" src="https://github.com/user-attachments/assets/38c74cdd-1067-466f-8700-4ca5e4c2a477" />
<img width="660" height="120" alt="image" src="https://github.com/user-attachments/assets/036ca366-81c7-4c9c-ac2a-83a444457c23" />
<img width="717" height="69" alt="image" src="https://github.com/user-attachments/assets/1da7881a-f2f1-44e1-876d-a3ceaa93be34" />

<img width="468" height="523" alt="image" src="https://github.com/user-attachments/assets/2f34f639-3bd7-4ef3-8ea7-ee138719c1b2" />
