// #include <iostream>
// using namespace std;

// class A {
// public:
//     A(float v) { A::v  = v;} // Constructor initializing v to 2.5
//     float v;
    
//     float set(float v) {
//         A::v =  v; // Modifies the class member variable 'v'
//         return v;     // Returns the parameter 'v' (not the modified member variable)
//     }
    
//     float get(float v) {
//         return A::v;
//     }
// };

// int main() {
//     A *a = new A(1.0), *b = new A(*a);
//     cout << a->get(b->set(a->v));
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
// public:
//     float v;
    
//     float set(float v) {
//         A::v += 1.0; // Modifies the class member variable 'v'
//         return v;     // Returns the parameter 'v' (not the modified member variable)
//     }
    
// 	float set(float v) {
//         A::v +=  v + 1.0; // Modifies the class member variable 'v'
//         return 0.0;     // Returns the parameter 'v' (not the modified member variable)
//     }
//     float get(float v) {
//         v += A::v; // Adds class member variable 'v' to the parameter 'v'
//         return v;
//     }
// };

// int main() {
//     A a;
//     cout << a.get(a.set(a.set(a.set())));
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A {
// public:
//     A() { v = 2.5; } // Constructor initializing v to 2.5
//     float v;
    
//     float set(float v) {
//         A::v += 1.0; // Modifies the class member variable 'v'
//         return v;     // Returns the parameter 'v' (not the modified member variable)
//     }
    
//     float get(float v) {
//         v += A::v; // Adds class member variable 'v' to the parameter 'v'
//         return v;
//     }
// };

// int main() {
//     A a;
//     cout << a.get(a.set(1.5));
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A {
// public:
// float v;
// 	A() :v(1.0){} 
//     A(const A& a) : v(2.0){}
//     A(float v) :v(3.0) {}
//     float get() { return A::v; }
// };

// int main() {
//     A a, b(a.get()), c(b);
//     cout << a.v + b.v + c.v;
//     return 0;
// }

#include <iostream>
using namespace std;

class A {
public:
    float v;
    A( A &a) { v = a.get(0.0); }


    A(float v) { A::v = v; }
    float set(float v)
	 {
		
		A::v += v; 
		return A::v;
	}
    float get() { return A::v += v; }
};

int main() {
    A *a = new A(1.0), *b = new A(*a);
    cout << a->get() - b->set(a->v);
    return 0;
}