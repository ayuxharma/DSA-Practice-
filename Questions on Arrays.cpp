//L20
//(question solving )

//1. REVERSE THE ARRAY

 /* #include <iostream>
#include <vector>

using namespace std ;

vector <int> reverse(vector <int> v) {

    int s = 0 , e = v.size()-1 ;

    while (s<=e) {
        swap (v[s] , v[e]) ;
        s++ ;
        e-- ;
    }
    return v ;

}

void print (vector <int> v) {
    
    for (int i=0 ; i<v.size() ; i++) {
        cout << v[i] << " " ;
    }
    cout << endl;
}

int main () {

    vector <int> v ;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    

    vector <int> ans = reverse(v) ;

    cout << "printing reverse array " << endl;
    print (ans) ;

    return 0 ;
} */





/* #include <iostream>
#include <vector>
using namespace std ;

void merge (int arr1[] , int n , int arr2[] , int m , int arr3[]) {

// dono loop ko i aur j se shuru krenge... jo choota hoga usko arr3 main daalkr ++ kr denge and phirse compare... loop bn jaega ek
// this loop will stop when i or j is > length of array 
// now agar ek array main kuch reh gya h , toh ek aur loop se unko copy kr denge ascending order main in the arr3 i.e answer vala array

int i = 0 , j = 0 ;
int k = 0;
while (i<n && j<m) {
    if (arr1[i]<arr2[j]) {
        arr3[k] = arr1[i] ;
        k++ ;
        i++ ;
    }
    else {
        arr3[k]=arr2[j] ;
        k++ ;
        j++ ;
    }
}

//copy first array ki remaining elements
while (i<n) {
    arr3[k]=arr1[i] ;
    k++ ;
    i++ ;
}

//copy second array ki remaining elements
while (j<m) {
    arr3[k] = arr2[j] ;
    k++ ;
    j++ ;
}
}


void print ( int ans[] , int n) {
    for (int i=0 ; i<=n ; i++) {
        cout << ans[i] << " " ;
    }
    cout << endl;
}

int main () {

    int arr1 [5] = {1,3,5,7,9};
    int arr2 [3] = {2,4,6};

    int arr3 [8] = {0};

    merge (arr1 , 5 , arr2 , 3 , arr3) ;

    print (arr3 , 8) ;

    
    return 0 ;
} */

// HOMEWORK QUESTION ON THIS TOPIC

/* 

#include <iostream>
using namespace std ;

void merge (int arr1[] , int n , int arr2[] , int m , int arr3[]){
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while (i<n && j<m){
        if (arr1[i]<arr2[j] && arr1[i] != 0){
            arr3[k]=arr1[i] ;
            i++ ;
            k++ ;
        }
        else {
            arr3[k]=arr2[j] ;
            j++ ;
            k++ ;
        }
    }

    // ab bache hue jo elements reh gye h unko arr3 mai copy krna h 
    while (i<n && arr1[i] != 0){
        arr3[k] = arr1[i] ;
        i++ ;
        k++ ;
    }

    while (j<m && arr2[j] != 0){
        arr3[k] = arr2[j] ;
        j++ ;
        k++ ;
    }
}

void print (int arr[] , int size){
    for (int i=0 ; i<size ; i++){
        cout << arr[i] << " " ;
    }
}


int main() {

    int nums1[6] = {1,2,3,0,0,0} ;
    int nums2[3] = {2,5,6} ;

    int nums3[6] = {0} ;

    merge (nums1 , 6 , nums2 , 3 , nums3) ;

    print (nums3 , 6) ;
}

*/


//Q.3 MOVE ZEROES without hampering the order of non zero elements

void moveZeroes (vector<int> & nums) {

// shifting all non zero values to left side
    int nonZeroValue=0;
    for (int j=0; j<nums.size() ; j++) {

        if (nums[j] != 0) {
            swap (nums[j] , nums[nonZeroValue]) ;
            nonZeroValue ++ ;
        }
    }
}

