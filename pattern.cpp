// Pattern 1: Alphabet Square (A-D)
#include <iostream>
using namespace std;
int main(){
    int m=4;
    int n=4;
    for(int i=0;i<m;i++){
    char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 2: Right-Angled Triangle of Stars
#include <iostream>
using namespace  std;
int main(){
    // int m=4;
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 3: Continuous Alphabets in Square
#include <iostream>
using namespace std;
int main(){
    int m=3;
    int n=3;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 4: Continuous Numbers in Square
#include <iostream>
using namespace std;
int main(){
    int m=3;
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 5: Triangle of Row Numbers
#include <iostream>
using namespace  std;
int main(){
    // int m=4;
    int n=4;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 6: Alphabet Triangle
#include <iostream>
using namespace  std;
int main(){
    // int m=4;
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}

// Pattern 7: Reverse Number Triangle
#include <iostream>
using namespace  std;
int main(){
    // int m=4;
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 8: Continuous Number Triangle
#include <iostream>
using namespace  std;
int main(){
    int n=4;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        
        cout<<endl;
    }
    return 0;
}

// Pattern 9: Continuous Alphabet Triangle
#include <iostream>
using namespace  std;
int main(){
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        
        cout<<endl;
    }
    return 0;
}

// Pattern 10: Right-Aligned Number Triangle
#include <iostream>
using namespace  std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
            for(int k=0;k<n-i;k++){
                cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}

// Pattern 11: Decreasing Number Triangle
#include <iostream>
using namespace  std;
int main(){
    int n=4;
    for(int i=1;i<n;i++){
        int num=i;
        for(int j=1;j<=i;j++){
            cout<<num;
            num--;
        }
         cout<<endl;
    }
    return 0;
}

// Pattern 12: Increasing Number Triangle with Leading Spaces
#include <iostream>
using namespace  std;
int main(){
    int n=4;
    for(int i=1;i<n;i++){
        int num=1;
       for(int k=n;k>=1;k--){
        cout<<" ";
       }
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
         cout<<endl;
    }
    return 0;
}