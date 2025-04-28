#include<iostream>
using namespace std;
int main()
{
    class person1{
        char name[50];
        int number;
        float marks;
    };
    class person2{
    };

    cout<<sizeof(person1)<<endl; 
    cout<<sizeof(person2)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(char)<<endl;
}

/*
Q. Why is sizeof(person1) 60 instead of 58?
Given that char[50] = 50 bytes, int = 4 bytes, and float = 4 bytes, the total should be 50 + 4 + 4 = 58 bytes.
So why is the actual size 60?

Also, if class person1 takes 60 bytes, then why does sizeof(person2), an empty class, return 1 byte?


--> Ans.
    The size of person1 is 60 bytes instead of 58 due to memory alignment and padding. While char[50], int, and float add up to 58 bytes, the compiler adds 2 extra bytes after the char array to align the int on a 4-byte boundary, making it 60 bytes in total. As for person2, even though it's an empty class, it still takes up 1 byte so that each object has a unique address in memory, as C++ does not allow objects with size 0.


-->
    person1 ક્લાસની સાઈઝ 60 બાઇટ્સ કેમ થાય છે, જયારે તેમાં માત્ર char[50], int અને float હોય છે જેનો કુલ જથ્થો 50 + 4 + 4 = 58 બાઇટ્સ થાય છે?

    અહીં મુખ્ય મુદ્દો છે memory alignment અને padding.

    જ્યારે કમ્પાઈલર memory assign કરે છે, ત્યારે તે કેટલાક ડેટા ટાઇપ્સ માટે alignment ની જરૂરિયાત રાખે છે. જેમ કે int અને float ને 4-byte alignment પર રાખવું જરૂરી હોય છે, એટલે કે એ માટેનો memory address 4થી વિભાજ્ય હોવો જોઈએ.

    હવે person1 ક્લાસમાં:

    char name[50] memoryના પહેલા 50 બાઇટ્સ લે છે (એડ્રેસ 0 થી 49 સુધી).

    પછી આવતો int number છે, જે 4-byte alignment માં હોવો જોઈએ. પણ address 50 પર int મૂકીશું તો alignment તૂટે. તેથી કમ્પાઈલર ત્યાં 2 બાઇટ્સનું padding મૂકે છે, જેથી int એડ્રેસ 52 પરથી શરૂ થાય.

    પછી int માટે 4 બાઇટ્સ (52 થી 55),

    અને float marks માટે પણ 4 બાઇટ્સ (56 થી 59) લાગે છે.

    આ રીતે કુલ memory થાય:
    50 (char[]) + 2 (padding) + 4 (int) + 4 (float) = 60 bytes

 
*/