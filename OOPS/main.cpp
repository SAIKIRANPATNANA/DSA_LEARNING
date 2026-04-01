// OOPS in cpp;
//classes,objects and object pointers;
/*#include <iostream>
using namespace std;
int main() {
    class Fruit {
    public:
      string name;
      string color;
    }; 
    Fruit apple;
    apple.name = "Apple";
    apple.color = "Red";
    Fruit orange;
    orange.name = "orange";
    orange.color = "Orange";
    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    Fruit *banana = new Fruit();
    banana->name = "Banana";
    banana->color = "Yellow";
    cout<<apple.name<<" - "<<apple.color<<endl;
    cout<<orange.name<<" - "<<orange.color<<endl;
    cout<<mango->name<<" - "<<mango->color<<endl;
    cout<<banana->name<<" - "<<banana->color<<endl;
    return 0;
}*/
// constructors;
/*#include <iostream>
using namespace std;
int main() {
    /*class Rectangle {
    public:
        int l;
        int b;
        // default constructor(no args passed);
        Rectangle() {
        l = 1;
        b = 1;
        }
        //  parametrized constructor(args passed);
        Rectangle (int x, int y) {
        l = x;
        b = y;
        }
        // copy constructor(initialize an object by the values of other object);
        Rectangle(Rectangle &r) {
            l = r.l;
            b = r.b;
        }
    };
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    Rectangle r2(2,3);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}*/
// practice;
/*/*#include <iostream>
using namespace std;
int main() {
    class Student {
    public:
        string name;
        int id;
        string skill;
        Student() {
            name = "SaiKiran";
            id = 210132;
            skill = "DSM";
        }
        Student(string x, int  y, string z) {
            name = x;
            id = y;
            skill = z;
        }
        Student(Student &student) {
            name = student.name;
            id = student.id;
            skill = student.skill;
        }
    };
    Student sohan; 
    sohan.name = "Sohan";
    sohan.id = 342342;
    sohan.skill = "Webdevlopment";
    Student *abdul= new Student("Abdul",523542,"devops");
    Student pagal = *abdul;
    cout<<sohan.name<<" "<<sohan.id<<" "<<sohan.skill<<endl;
    cout<<abdul->name<<" "<<abdul->id<<" "<<abdul->skill<<endl;
    cout<<pagal.name<<" "<<pagal.id<<" "<<pagal.skill<<endl;
    return 0;
}
*/
// destuctors;
/*#include <iostream>
using namespace std;
int main() {
    class Square{
    public:
        int side;
    Square() {
        side = 1;
    }
    Square(int x) {
        side = x;
    }
    Square(Square &square) {
        side = square.side;
    }
    ~Square() { //destuctor funtn;
        cout<<"Obj is dltd since destuctor is called;"<<endl;
    }
    };
    Square *sq4 = new Square(3);
    cout<<sq4->side<<endl;
    delete sq4;
    Square sq1;
    cout<<sq1.side<<endl;
    Square sq2(2);
    cout<<sq2.side<<endl;
    Square sq3 = sq2;
    cout<<sq3.side<<endl;
    
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    class Mayya{
        int x;
        string y;
    public:
    void set_x(int n) {
        x = n;
    }
    void set_y(string s) {
        y = s;
    }
    int get_x() {
        return x;
    }
    string get_y() {
        return y;
    }
    };
    Mayya Sai;
    Sai.set_x(2);
    cout<<Sai.get_x()<<endl;
    Sai.set_y("LOVE");
    cout<<Sai.get_y()<<endl;
    return 0;
}*/
// Inheritance and access specifiers;
/*#include <iostream>
using namespace std;
int main() {
    class Parent {
    public:
    int a;
    private:
    int b;
    protected:
    int c;
    };
    class Child_1: public Parent {
        // a will remain public;
        // b will remail protected;
        // c will remain inaccessible;
    }
    class Child_2: private Parent {
        // a will become private;
        // b will bocome protected;
        // c will will remain inaccessible;
    }
    class Chile_3: protected Parent {
    //  a will become protected;
    // b will remain protected;
    // c will remain inaccessible;
    }
    return 0;
}*/
// types of Inheritance;
// single_inheritance,multi_Level_inheritance;
/*#include <iostream>
using namespace std;
int main() {
    class Parent{
        public:
        Parent()  {
            cout<<"Parent class has been called."<<endl;
        }
    };
    class Child: public Parent{
        public:
        Child() {
            cout<<"Child class has been called."<<endl;
        }
    };
    class GrandChild: public Child{
        public:
        GrandChild() {
            cout<<"GrandChild class has been called."<<endl;
        }
    };
    // Parent parent;
    // Child child;
    // GrandChild grand_child;
    return 0;
}*/
// multiple_inheritance;
/*#include <iostream>
using namespace std;
int main() {
    class Parent_1 {
        public:
        Parent_1() {
            cout<<"Parent_1 has been called."<<endl;
        }
    };
    class Parent_2 {
        public:
        Parent_2() {
            cout<<"Parent_2 has been called."<<endl;
        }
    };
    class Child: public Parent_1, public Parent_2{
        public: 
        Child() {
            cout<<"Child has been called."<<endl;
        }
    };
    Child child;
    return 0;
}*/
//Heirarchial inheritance;
/*#include <iostream>
using namespace std;
int main() {
    class Parent{
        public: 
        Parent() {
            cout<<"Parent class has been called."<<endl;
        }
    };
    class Child_1: public Parent{
        public:
        Child_1() {
            cout<<"Child_1 class has been called."<<endl;
        }
    };
    class Child_2: public Parent{
        public:
        Child_2() {
            cout<<"Child_2 class has been called."<<endl;
        }
    };
    Child_1 child_1;
    Child_2 child_2;
    return 0;
}*/
//hybrid_heritance(different kinds of inheritance's );
// here multilevel, multiple inheritances are used ...
/*#include <iostream>
using namespace std;
int main() {
    class Parent_1 {
        public:
        Parent_1() {
            cout<<"Parent_1 Class has been called."<<endl;
        }
    };
    class Parent_2 {
        public:
        Parent_2() {
            cout<<"Parent_2 Class has been called."<<endl;
        }
    };
    class Child: public Parent_1, public Parent_2 {
        public:
        Child()  {
            cout<<"Child Class has been called."<<endl;
        }
    };
    class GrandChild: public Child {
        public:
        GrandChild() {
            cout<<"GrandChild Class has been called."<<endl;
        }
    };
    GrandChild grand_child;
    return 0;
}*/
// Diamond_problem;(common_ancestor-->parents-->child)
/*#include <iostream>
using namespace std;
int main() {
    class GrandParent {
        public:
        GrandParent() {
            cout<<"GrandParent Class has been called. "<<endl;
        }
    };
    class Parent_1: public GrandParent{
        public:
        Parent_1() {
            cout<<"Parent_1 Class has been called. "<<endl;
        }
    };
    class Parent_2: public GrandParent{
        public:
        Parent_2() {
            cout<<"Parent_2 Class has been called. "<<endl;
        }
    };
    class Child_1: public Parent_1{
        public:
        Child_1() {
            cout<<"Child_1 Class has been called. "<<endl;
        }
    };
    class Child_2: public Parent_2{
        public:
        Child_2() {
            cout<<"Child_2 Class has been called. "<<endl;
        }
    };
    class GrandChild: public Child_1, public Child_2 {
        public: 
        GrandChild() {
            cout<<"GrandChild Class has been called. "<<endl;
        }
    };
    GrandChild grand_child;
    return 0;
}
*/
// compile_time_polymorphism;
// function_overloading...
/*#include <iostream>
using namespace std; 
int main() {
    class Add {
        public:
        void add(int x, int y) {
            cout<<x+y<<endl;
        }
  
        void add(int x, int y, int z) {
            cout<<x+y+z<<endl;
        }
        
        void add(float x, float y) {
            cout<<x+y<<endl;
        }
    };
    Add plus_1;
    plus_1.add(2,3);
    Add plus_2;
    plus_2.add(1,2,3);
    Add plus_3;
    plus_3.add(float(0.8),float(0.2));
    return 0;
}*/
// operator_overloading;
/*#include <iostream>
using namespace std;
int main() {
    class Complex{
        public:
        int real;
        int imag;
        Complex(int x, int y) {
            real = x; 
            imag = y;
        }
        Complex operator+(Complex &c) {
            Complex ans(0,0);
            ans.real = real + c.real;
            ans.imag = imag + c.imag;
            return ans;
        }
    };
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1+c2;
    cout<<c3.real<<"+"<<c3.imag<<"j";
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    class Product{
        public:
        int a;
        int b;
        Product(int x, int y) {
            a = x; 
            b = y;
        }
        Product operator*(Product &p) {
            Product ans(1,1);
            ans.a = a * p.a;
            ans.b = b * p.b;
            return ans;
        }
    };
    Product p1(1,2);
    Product p2(3,4);
    Product p3 = p1*p2;
    cout<<"left_product: "<<p3.a<<" and "<<"right_product: "<<p3.b;
    return 0;
}*/
// run_time_polymorphism;
// function_overriding;
/*#include <iostream>
using namespace std;
int main() {
    class Parent {
    public:
    virtual void print() {
            cout<<"Parent Class"<<endl;
        }
    void show() {
            cout<<"Parent Class"<<endl;
        }
    };
    class Child: public Parent {
        public:
    void print() {
            cout<<"Child Class"<<endl;
    }
    void show() {
            cout<<"Child Class"<<endl;
    }
    };
    Parent *p;
    Child c;
    p = &c;
    // Parent p;
    // Child c;
    // c.print();
    // c.show();
    // p.print();
    // p.show();
    p->print();
    p->show();
    // basically child class function overrides parent class function;
    return 0;
}*/
// friend_function in oops;
// #include <iostream>
// using namespace std;
// void print(Mayya &Sai) {
//         cout<<Sai.a;
//     }
// int main() {
//     class Mayya {
//         int a;
//     public:
//         Mayya(int x) {
//             a = x;
//         }
//     friend void print(Mayya &Sai);
//     };
//     Mayya Sai(143);
//     print(Sai);
//     return 0;
// }
// 26. Write a C++ program to check if a given string is a title-cased string or not. 
// When the string is title cased, return "True", otherwise return "False".
/*#include <iostream>
using namespace std;
int main() {
    string Title = "The Quick Brown Fox.";
    bool ans = true;
    for(int i=0; i<Title.size(); i++) {
        if(i==0 or Title[i-1]==' ')  {
        if(65<=int(Title[i]) and int(Title[i])<=90) {
            ans = true;
        }
        else {
            ans = false;
            break;
        }
        }
    }
    if (ans==true) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}*/
// Write a C++ program to insert a space when a lower character follows an upper character in a given string.
/*#include <iostream>
using namespace std;
int main() {
    string str= "TheQuickBrownFox.";
    string mod = "";
    for(int i=0; i<str.size(); i++) {
        if((97<=int(str[i]) and int(str[i])<=122) and (65<=int(str[i+1]) and int(str[i+1])<=90)) {
        mod += str[i];
        mod += " ";
        }
        else {
            mod += str[i];
        }
    }
    cout<<str<<endl;
    cout<<mod;
    return 0;
}*/
// 28. Write a C++ program to extract the first specified number of vowels from a given string. 
// If the specified number is less than the number of vowels present in the text, display "n is less than the number of vowels present in the string".
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 0;
    string vowel = "";
    string str = "Extract the first n number of vowels from the said string";
    for(int i=0; i<str.size(); i++) {
        if(str[i]=='a' or  str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='A' or  str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U' ) {
            count++;
            if(count<=n){
            vowel += str[i];
            }
        }
        if(count>n) {
            cout<<"n is less than the number of vowels present in the string"<<endl;
            break;
        }
    }
    if(count<n) {
        cout<<"n is greater than the number of vowels present in the string"<<endl;
    }
    cout<<count<<endl;
    return 0;
}*/
// 29. Write a C++ program to print a given integer with commas separating the thousands.
/*#include <iostream>
#include <string>
using namespace std;
int main()  {
    string str = "10000";
    string dup = "";
    int i = str.size()-1;
    while(i>=0) {
       int j = 0;
       while(j<3) {
            dup += str[i];
            i--;
            j++;
       }
        if(j==3 and i+2!=0) {
        dup += ",";
        }
    }
    str = "";
    for(int i=dup.size()-1; i>=0; i--) {
        str += dup[i];
    }
    cout<<str<<endl;
    return 0;
}*/
// 30. Write a C++ program to identify the missing letter in a given string (list of alphabets). 
// The method returns, "There is no missing letter!" if no letters are missing from the string.
/*#include <iostream>
using namespace std;
int main() {
    string str = "ghjl";
    int result = 1;
    int j = 0;
    for(int i=int(str[0]); i<=int(str[str.size()-1]); i++) {
        if(int(str[j])==i) {
            result = 1;
            j++;
        }
        else {
            result = 0;
            cout<<char(i)<<endl;
            break;
        }
    }
    if(result == 1) {
        cout<<"There is no letter missing!";
    }
    return 0;
}*/
// 30. Write a C++ program to identify the missing letter in a given string (list of alphabets). \\
// The method returns, "There is no missing letter!" if no letters are missing from the string.
// #include <iostream>
// using namespace std;
// int main() {
//     string str = "ghjl";
//     int result = 1;
//     int j = 0;
//     for(int i=int(str[0]); i<=int(str[str.size()-1]); i++) {
//         if(int(str[j])==i) {
//             result = 1;
//             j++;
//         }
//         else {
//             result = 0;
//             cout<<char(i)<<endl;
//         }
//     }
//     // if(result == 1) {
//     //     cout<<"There is no letter missing!";
//     // }
//     return 0;
// }

// OOPS master_revision:
// why and what? To address real world problems;
// object: used to represent real world entities aka instance of a class;
// class: template/design/ type;
// eg: cookie cutter where cookie is an instance of class cutter;
// I)abstraction: hiding_unimportant_details;
// -->advantages of abstraction in real world scenario:
// 1) building loosely coupled applications and making easy for customers;
// 2) Improvising the system without the indulging customers;
// 3) Security;
// II)Encapsulation: binding data and methods together;
// -->No one should be able to change the state directly;
// -->we will be using access modifiers;
// -->setters and getters: controlled manners of allowing other objects to make changes; 
// III)Inheritance: parent_child relationship or heirarchial relationship;
// -->DNA test(parent_child relationship/inheritance) in programming: isA;
// -->Registration in programming: Extends;
// -->Code Reusability;
// -->Modification is easy snd fast;
// -->DNA test(possessive relationship) in programming: hasA;
// ---->Aggregation: modern practical relationship (eg: relationship b/w university and professor);
// ---->composition: traditional relationship (eg: relationship b/w heart and body);
//IV)Polymorphism: Behave differently at different situations....
//-->1)static/compile time polymorphism:
//--->overloading: more than one method with the same name.
//-->2)run time polymorphism: overriding + inheritance.
//--->helps us to reuse + automize


// finding_peak_element_in an array....
// BruteForce solution using linearSearch...
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {0,1,4,0};
    int n = sizeof(array)/sizeof(array[0]);
    for (int i=1; i<n; i++) {
        if(array[i]>array[i-1] and array[i]>array[i+1]) {
            cout<<i;
            break;
        }
    }
    // time_complexity: O(n);
    return 0;
}*/
// #include <iostream>
// using namespace std;
// int findPeakElement(int array[], int n) {
//     int low = 0;
//     int high = n-1;
//     int mid;
//     int ans = -1;
//     while(low<=high) {
//         mid = low + ((high-low)/2);
//         if(array[mid]>array[mid-1]) {
//             ans = max(mid,ans);
//             low  = mid+1;
//         }
//         else {
//             high = mid-1;
//         }
//     }
//     return ans;
// }
// int main() {
//     int array[] = {1,2,3,4,5};
//     int n = sizeof(array)/sizeof(array[0]);
//     cout<<findPeakElement(array,n);
//     return 0;
// }
// finding peakIndex in case of array of peakArrays:
/*#include <iostream>
using namespace std;
int findingPeakIdx(int array[], int n) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(mid==0) {
            if (array[mid]>array[1]) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if(mid==n-1) {
            if(array[mid]>array[n-2]) {
                return n-1;
            }
            else {
                return n-2;
            }
        }
        else {
            if(array[mid]>array[mid-1] && array[mid] > array[mid+1]) {
                return mid;
            }
            else if(array[mid]>array[mid-1]) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
    }
    return -1;
}
int main() {
    int array[] = {3,4,5,1,9,10,2,8,6,1};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<findingPeakIdx(array, n);
    return 0;
}*/
//checking the presence of a target element in a sorted 2D_array in which last element of each subarray is less than the first element next subarray;
/*#include <iostream>
using namespace std;
int isTargetPresent(int array[3][4], int n, int target) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = low + ((high-low)/2);
        if(array[mid/4][mid%4] == target) {
            return 1;
        }
        else if(array[mid/4][mid%4]<target) {
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    return 0;
}
int main() {
    int array[3][4] = {1,3,5,7,10,11,16,20,23,30,34,50};
    int n = sizeof(array)/sizeof(array[0][0]);
    int target = 17;
    cout<<isTargetPresent(array, n, target);
    return 0;
}
*/
// oops in cpp:
// #include <iostream>
// #include<cstring>
// using namespace std;
// class SaiKiran {
//     int rank = 10;
//     int ability = 100;
//     public:
//     void print_rank() {
//     cout<<rank<<endl;
//     }
//     int grade;
//     char *name;
//     int level;
//     string star;
//     SaiKiran() {
//         // cout<<this<<endl;
//         name = new char[100];
//     }
//     SaiKiran(int grade, int level) {
//         this->grade = grade;
//         this->level = level;
//         // this->star = star;
        // this->name = name;
    }
    // SaiKiran(SaiKiran& theTemp) {
    //     cout<<"you are king SaiKiran."<<endl;
    //     this-> grade = theTemp.grade;
    //     this->level = theTemp.level;
    //     this->star = theTemp.star;
    // }
    // void set_rank(int rank) {
    //     this->rank = rank;
    // }
    // void set_ability(int rank) {
    //     this->ability = rank;
        
    // }
    // int get_rank() {
    //     return rank;
    // }
    // int get_ability() {
    //     return ability;
    // }
//     void setGrade(int grade) {
//         this->grade = grade;
//     }
//     void setLevel(int level) {
//         this->level = level;
//     }
//     void setName(char name[]) {
//         strcpy(this->name, name);
//     }
//     void print_details() {
//         cout<<"grade: "<<this->grade<<endl;
//         cout<<"level: "<<this->level<<endl;
//         // cout<<"star: "<<this->star<<endl;
//         cout<<"name: "<<this->name<<endl;
//     }
// };
// int main() {
//     // SaiKiran king(1,1,"mayya");
//     // SaiKiran theEmperor(king);
//     SaiKiran obj1('a', 1);
//     char name[100] = "omnamahsivaya";
//     obj1.setName(name);
//     obj1.setGrade(1);
//     obj1.setLevel(1);
//     obj1.print_details();
//     // cout<<&king<<endl;
//     // SaiKiran *thop = new SaiKiran();
//     // (*thop).set_rank(15);
//     // thop -> set_rank(20);
//     // (*thop).set_ability(95);
//     // thop -> set_ability(98);
//     // cout<<(*thop).get_rank()<<endl;
//     // cout<<(*thop).get_ability()<<endl;
//     // SaiKiran nextLevel(2, 1, "FIVE");
//     // nextLevel.grade = 4;
//     // cout<<nextLevel.grade<<endl;
//     // SaiKiran vereLevel(nextLevel);
//     // cout<<vereLevel.grade<<endl;
//     // cout<<sizeof(SaiKiran);
//     // king.set_rank(1);
//     // king.print_rank();
//     // cout<<king.get_rank();
//     // king.set_rank = 1;
//     // cout<<king.rank<<endl;
//     // cout<<king.ability;
//     // cout<<sizeof(king);
//     return 0;
// }





















