#include <iostream>
#include <map>
#include <unordered_map>

using namespace std ;

int main() {

    // creation
    unordered_map <string , int> m ;

    // insertion

    // 1
    pair <string , int> p = make_pair("ayush" , 3) ;
    m.insert(p) ;

    // 2
    pair <string , int> pair2 ("sharma"  , 2) ;
    m.insert(pair2) ;

    // 3
    m["billu"] = 1 ;

    // entry updation
    m["billu"] = 2 ;

    cout << m["billu"] << endl;
    cout << m.at("ayush") << endl;

    cout << m.at("jpg") << endl;  // output is error
    cout << m["jpg"] << endl; // output is 0

    // size
    cout << m.size() << endl;

    // to check presence
    cout << m.count("bro") << endl; 
    // agar koi key nhi h toh count 0 aaega oterwise jitni baar voh key present h

    // erase
    m.erase("ayush") ;

    // access
    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    // another way to access (iterator)
    unordered_map <string , int> :: iterator it = m.begin() ;

    while (it != m.end()){
        cout << it->first << " " << it->second << endl;
        it ++ ; 
    }


    return 0 ;
}