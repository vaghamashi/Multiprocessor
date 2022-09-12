#include <iostream>

using namespace std;

class cricket {
    
    public :
    
        
        int over;
        
        
};

class T20Match : cricket {
    
    public : 
    
    void t20match1(){
        cout << "Enter Over(T20Match) : ";
        cin >> over;
        
    cout << "T20Match Over : " << over<<endl;
    }
};

class TestMatch : cricket {
    
    public : 
    
    void testmatch1(){
        cout << "Enter Over (TestMatch) : ";
        cin >> over;
        
    cout << "TestMatch Over : " << over<<endl ;
    }
};

int main (){
    
      T20Match t20match;
      TestMatch testmatch;

 
    t20match.t20match1();
    testmatch.testmatch1();

    
}
