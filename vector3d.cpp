#include <iostream>
#include <fstream>
#include "vector3d.h"
#include <cmath> 

using namespace std;

// Constructor
Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

// ===== 멤버 연산자 구현 =====

// 벡터 덧셈 (v1 + v2)
Vector3D Vector3D::operator+(const Vector3D& v) const {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

// 벡터 뺄셈 (v1 - v2)
Vector3D Vector3D::operator-(const Vector3D& v) const {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

// 벡터 외적 (Cross Product) (v1 * v2)
Vector3D Vector3D::operator*(const Vector3D& v) const {
    return Vector3D(
        y * v.z - z * v.y, // X component
        z * v.x - x * v.z, // Y component
        x * v.y - y * v.x  // Z component
    );
}

// 벡터 * 스칼라 (v * scalar)
Vector3D Vector3D::operator*(double scalar) const {
    return Vector3D(x * scalar, y * scalar, z * scalar);
}

// 벡터 / 스칼라 (v / scalar)
Vector3D Vector3D::operator/(double scalar) const {
    return Vector3D(x / scalar, y / scalar, z / scalar);
}

// 단항 부호 반전 (-v)
Vector3D Vector3D::operator-() const {
    return Vector3D(-x, -y, -z);
}

// ===== 비-멤버 (Friend) 연산자 구현 =====

// 출력 스트림 오버로딩 (cout << v)
ostream& operator<<(ostream& os, const Vector3D& v) {
    // (x, y, z) 형식으로 출력
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

// 입력 스트림 오버로딩 (cin >> v)
istream& operator>>(istream& is, Vector3D& v) {
    // x, y, z 값을 스트림으로부터 입력받음
    is >> v.x >> v.y >> v.z;
    return is;
}

// 스칼라 * 벡터 (scalar * v)
Vector3D operator*(double scalar, const Vector3D& v) {
    return Vector3D(scalar * v.x, scalar * v.y, scalar * v.z);
}

// 스칼라 / 벡터 (scalar / v)
Vector3D operator/(double scalar, const Vector3D& v) {
    // 스칼라를 벡터의 각 성분으로 나누어 반환
    return Vector3D(scalar / v.x, scalar / v.y, scalar / v.z);
}