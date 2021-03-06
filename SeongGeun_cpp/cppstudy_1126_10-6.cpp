//
// Created by 김재훈 on 26/11/2018.
//

/*  가상함수
 *  베이스  클래스에서 선언된 함수가 파생 클래스에서 재정의될 수 있는 함수.
 *  파생 클래스에서 재정의시 인자의 개수, 자료형, 리턴의 형이 같아야 함.(즉, 함수의 원형이 같음)
 *  베이스 클래스에서 virtual로 선언된 경우에는 파생 클래스에서 재정의로 될 것이라는 의미로 내포하며 파생 클래스에선 함수명 앞에 virtual은 안 붙여도 됨
 *  다수의 파생클래스가 파생클래스의 멤버함수를 실행하고자 할 때 가상함수를 사용.
 *  생성자는 가상함수로 선언할 수 없음. 소멸자는 가상함수로 선언할 수 있음.*/

#include <iostream>

using namespace std;

class Father
{
public:
    virtual void Display()
    {
        cout << "I am your Father." << endl;
    }
};

class Son : public Father
{
public:
    virtual void Display()
    {
        cout << "I am Son" << endl;     // 재정의(overriding)
    }
};

void main()
{
    Father *pSon = new Son;         // virtual 상향변환, 베이스 객체의 포인터 pSon은 파생클래스 Son의 가상 멤버함수에 접근

    pSon->Display();                // "I am a Son."
    pSon0->Father::Display();       // "I am your Father."
                                    // 파생클래스에서 베이스클래스 함수 호출형식
}

