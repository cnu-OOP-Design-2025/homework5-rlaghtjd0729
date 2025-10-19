[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/UU5RIujy)
# C++ Vector3D 클래스 실습 프로젝트

이번 과제는 C++의 연산자 오버로딩과 stream 개념을 실습하기 위한 과제입니다.
`Vector3D` 클래스의 다양한 연산자들을 직접 구현하며, 연산자 오버로딩의 개념을 이해합니다.

---

## 🎯 실습 목적

- 연산자 오버로딩 구현
- 입출력 스트림 연산자 오버로딩 실습

---

## 📁 파일 구성

### 1. `vector3d.cpp`

`Vector3D` 클래스의 기능을 구현합니다. 벡터 간의 연산, 스칼라 연산, 입출력 기능을 포함합니다.

#### 구현해야 할 함수

- `Vector3D operator+(const Vector3D& v) const`
  - 두 벡터의 각 성분을 더한 벡터를 반환
  - (1, 2, 3) + (2, 4, 6) = (5, 6, 9)

- `Vector3D operator-(const Vector3D& v) const`
  - 두 벡터의 각 성분을 뺀 벡터를 반환
  - (1, 2, 3) - (4, 5, 6) = (-1, -2, -3)

- `Vector3D operator*(const Vector3D& v) const`
  - 두 벡터의 외적(cross product)을 계산하여 반환 (v1, v2, v3) * (w1, w2, w3) = (v2*w3 - v3*w2, v3*w1 - v1*w3, v1*w2 - v2*w1)
  - (1, 2, 3) * (4, 5, 6) = (0, 0, 0)

- `Vector3D operator*(double scalar) const`
  - 벡터의 각 성분에 스칼라 값을 곱한 벡터 반환
  - (1, 2, 3) * 2 = (2, 4, 6)

- `Vector3D operator/(double scalar) const`
  - 벡터의 각 성분을 스칼라 값으로 나눈 벡터 반환
  - (2, 4, 6) / 2 = (1, 2, 3)

- `Vector3D operator-() const`
  - 벡터의 부호를 반전시킨 벡터 반환
  - -(1, 2, 3) = (-1, -2, -3)

- `friend ostream& operator<<(ostream& os, const Vector3D& v)`
  - 벡터를 `(x, y, z)` 형식으로 출력

- `friend istream& operator>>(istream& is, Vector3D& v)`
  - 입력 스트림으로부터 x, y, z 값을 입력받음

- `friend Vector3D operator*(double scalar, const Vector3D& v)`
  - 스칼라가 앞에 오는 경우의 곱 연산 정의
  - 2 * (1, 2, 3) = (2, 4, 6)

- `friend Vector3D operator/(double scalar, const Vector3D& v)`
  - 스칼라를 벡터 성분으로 나눈 결과 벡터 반환
  - 2 / (2, 4, 6) / 2 = (1, 0.5, 0.333333)

---

## 🧠 생각해보기

- non-member function으로 연산자 오버로딩 함수를 구현 했을 때의 장단점은 무엇인가요?
- `friend` 키워드를 사용하는 이유는 무엇인가요? 어떤 경우에 꼭 필요할까요?

---

## 🧪 테스트 방법

모든 함수 구현 후, 아래 명령어를 통해 테스트를 실행하세요:

### Windows 사용자
```
.\test5.bat
```

### MacOS/Linux 사용자
```bash
/bin/bash test5.sh
```


