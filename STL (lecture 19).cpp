//L19

//STL (very important) (standard template library)


//1. ARRAY 

/*
#include <iostream>
#include <array>

using namespace std ;
int main () {

int basic[3] = {1,2,3} ;

array <int,4> a = {1,2,3,4} ;

int size = a.size() ;

for (int i=0 ; i<size ; i++) {
    cout << a[i] << endl;
}

cout << "Element at 2nd index " << a.at(2) << endl;

//this will return boolean
cout << "Empty or not --> " << a.empty() << endl;


cout << "First element " << a.front() << endl;
cout << "Last element " << a.back() << endl;

}

*/




// 2. VECTOR (it is a dynamic array, size double kr leta h yeh apna jab pehle vala fill ho jaega aur next daalne ki koshish ki jaegi)

/*
#include <iostream>
#include <vector>
using namespace std ;
int main () {


    // capacity shows kitne elements ki jagah h and size shows kitne element pde hue h

    vector <int> v ;

    //or
    vector <int> a(5,1) ;
    // this is a vector with size 5 and initialized with 1 means iske paancho element 1 hai
    cout << "Print vector a  " << endl;
    for (int i:a) {
        cout << i << " " ;
    } cout << endl;

    cout << "Capacity is " << v.capacity() << endl;

    v.push_back(1) ;
    cout << "Capacity now is " << v.capacity() << endl;

     v.push_back(2) ;
    cout << "Capacity now is " << v.capacity() << endl;

     v.push_back(3) ;
    cout << "Capacity now is " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    cout << "Element at 2nd index is " << v.at(2) << endl;

    cout << "Front element " << v.front() << endl;
    cout << "Back element " << v.back() << endl;


    // POP last element ko remove kr deta h

    cout << "before pop " << endl;
    for (int i:v) {
        cout << i << " " ;
    }
    cout << endl;


    v.pop_back() ;
    cout << "after pop " << endl;
    for (int i:v) {
        cout << i << " " ;
    }


    // Clear is used to make size 0 mtlb vector khaali krna
    cout << "before clear size is " << v.size() << endl;

    v.clear() ;
    cout << "after clear size is " << v.size() << endl;
}
*/




//3. DEEQUE (insertion n deletion can be done from both front and back)
     // unlike vector n array , it has multiple contiguous fixed static arrays
     // it is also Dynamic


/* #include <iostream>
#include <deque>

using namespace std ;
int main () {

    deeque <int> d ;

  d.push_back(1) ;
  d.push_front(2);

for (int i:d) {
    cout << i << " " ;
}

d.pop_front() ;
//cout << endl;
//for (int i:d) {
//   cout << i << " " ; 
//  } 

    cout << " Print first index element " << d.at(1) << endl;

    cout<< " front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not" << d.empty() << endl;

// isme btana pdta h ki kitna kya delete krna h 
    cout << "before erase " << d.size() << endl;
    d.erase( d.begin() , d.begin()+1 );
    cout << "after erase " << d.size() << endl;
    for (int i:d) {
        cout << i << endl ;
    }
}
*/


//4. LIST (isme direct access nhi hota element pr, hume travel kr k jaana pdega uss tk )

/*
#include <iostream>
#include <list>

using namespace std ;
int main () {

    list <int> l ;

    list <int> n(5,100) ;
    cout << "printing n " << endl;
    for (int i:n) {
        cout << i << " " ;
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i:l) {
        cout << i << " " ;
    }
    cout << endl;

    l.erase(l.begin()) ;
    cout << "after erase " << endl;
    for (int i:l) {
        cout << i << " " ;
    }
    
    cout << endl;

    cout << "size of list " << l.size() << endl;
}
*/


//5. STACK (shaadi ki plate jaisa, jo sabse last main jaega usko sabse pehle access kr sakte h )

/*
#include <iostream>
#include <stack>

using namespace std ;
int main () {

    stack <string> s ;

    s.push("ayush") ;
    s.push("sharma") ;
    s.push("kumar") ;

    cout << "Top element  " << s.top() << endl;

    s.pop() ;
    cout << "new top element is " << s.top() << endl;
    
    cout << "Size of stack  " << s.size() << endl;

    cout << "Empty or not  " << s.empty() << endl;

}
*/



//6. QUEUE (shaadi ki line , first cum first)

/* #include <iostream>
#include <queue>

using namespace std ;
int main () {

    queue<string> q ;

    q.push("ayush") ;
    q.push("sharma") ;
    q.push("kumar") ;

    cout << "First element  " << q.front() << endl;

    cout << "size before pop " << q.size() << endl;
    q.pop() ;
    cout << "new first element  " << q.front() << endl;

    cout << "size after pop " << q.size() << endl;
}
*/


//7. PRIORITY QUEUE (heap type , default vala is max heap mtlb pehle vala is max )

/*
#include <iostream>
#include <queue>

using namespace std ;

int main () {

    //max heap
    priority_queue <int> maxi;

    //min heap
    priority_queue <int,vector<int> , greater <int> > mini ;
    
    maxi.push(1) ;
    maxi.push(2) ;
    maxi.push(3) ;
    maxi.push(0) ;

    cout << "size   " << maxi.size() << endl;
    
    int n = maxi.size() ;
    for (int i=0 ; i<n ; i++) {
        cout << maxi.top() << " " ;
        maxi.pop() ;
    } cout << endl;



    mini.push(5) ;
    mini.push(1) ;
    mini.push(0) ;
    mini.push(4) ;
    mini.push(3);

    cout << "size   " << mini.size() << endl;
    
    
    int m = mini.size() ;
    for (int i=0 ; i<m ; i++) {
        cout << mini.top() << " " ;
        mini.pop() ;
    } cout << endl;
}
*/


//8. SET  (saare element unique hone chahiye , elements are returned in sorted order)
   
  /*
   #include <iostream>
   #include <set>

   using namespace std ;
   int main () {
    
    set <int> s ;

    s.insert(5) ;
    s.insert(1) ;
    s.insert(1) ;
    s.insert(0) ;

    for (auto i:s) {
        cout << i << endl;
    } cout << endl;


    s.erase(s.begin()) ;

    for (auto i:s) {
        cout << i << endl;
    }

    cout << endl ;

    cout << "5 is present or not " << s.count(5) << endl;
    

    set <int> :: iterator itr = s.find(5) ;
    
   }
   */


  //9. MAP (ek key ek he value ko point kregi sirf)
      // output sorted aata h

/* #include <iostream>
#include <map>

using namespace std ;
int main () {

    map <int,string> m ;

    m[1]= "ayush" ;
    m[13]= "kumar" ;
    m[2]= "sharma" ;
    m[5]= "meow" ;

    for (auto i:m) {
        cout << i.first << endl;
    }

m.insert ({5,"bheem"}) ;

cout << "before erase " << endl;
for (auto i:m) {
    cout << i.first << " " << i.second << endl;
}

cout << "finding -13  " << m.count(-13) << endl;

m.erase(13) ;
cout << "after erase " << endl;
for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

auto it = m.find(5) ;

for (auto i=it ; i!=m.end() ; i++) {
    cout << (*i).first << endl;
}
}
*/


//10. STL ALGORITHMS 

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;
int main () {

    vector <int> v ;

    v.push_back(1) ;
    v.push_back(3) ;
    v.push_back(6) ;
    v.push_back(7) ;

    cout << binary_search(v.begin() , v.end() , 6) << endl;
    // to check whether 6 is there or not 

    // iterator of the element present

    cout << "lower bound " << lower_bound(v.begin , v.end() , 6) - v.begin() << endl;
    // it returns iterator


    cout << "upper bound " << upper_bound(v.begin , v.end() , 6) - v.begin() << endl;

    int a = 3 ;
    int b = 5 ;
    
    cout << "max " << max(a,b) ;

    swap(a,b);
    cout << "now a " << a << endl;

    string abcd = "abcd" ;
    reverse (abcd.begin() , abcd.end()) ;
    cout << "string is " << abcd << endl;

    rotate(v.begin() , v.begin()+1 , v.end()) ;
    cout << "after rotate " << endl;
    for (int i:v) {
        cout << i << " " ;
    }
}  