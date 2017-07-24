//
// Created by Akhilesh Rao on 30-Dec-16.
//
#include <iostream>
#include <iomanip>
using namespace std;

class item{
public:
    void sum(int ,int );
};
inline void item::sum(int a,int b){
    cout<<a+b;
}
class test{
private:
    int a[10];
    int i;
public:
    void initialize(void){
        i=0;
    }
    void setvalue(int t){
        a[i]=t;
        i++;
    }
    void show(void){
        int j=0;
        for(;j<i;j++){
            cout<<a[j]<<setw(5);
        }
    }
};
class usingstatic{
    static int count;
    int j=10;
public:
    void getdata(int a){
        cout<<a<<setw(5);
        count++;
    }
    static void getcount(void){
        cout<<count<<endl;
    }
};
int usingstatic::count;
// friend int x::fun1();
//class ABC;  /------------forward declaration-----------/
//class is just a another type of datatype
//void mul (int ,int) const; /------------constant member function----------------/
//::* /-------pointer to member----------/int A::*ip=&A::m
//derefrancing?
/*
 * class m{
 * int x,y;
 * public:
 *      void set_xy(int a,int b){
 *          x=a;
 *          y=b;
 *      }
 *      friend int sum(M);
 * }
 * int sum(M m){
 *      int M::*px=&M::x;
 *      int M::*py=&M::y;
 *      M *pm=&m;
 *      int s=m.*px+pm->*py;
 *      return s;
 * }
 * int main(){
 *      M n;
 *      void (M::*pf)(int ,int)=&M::set_xy; //refrencing to a function of a class
 *      (n.*pf)(5,20);
 *      cout<<sum(n)<<endl;
 *
 *      M *op=&n;
 *      (op->*pf)(2,20);
 *      cout<<sum(n)<<endl;
 *
 *      return 0;
 * }
 */
int main(){
    cout<<10<<setw(10)<<15<<setw(10);
    item l;
    l.sum(5,15);
    test t;
    t.initialize();
    t.setvalue(5);
    t.setvalue(10);
    t.setvalue(9);
    t.show();
    usingstatic k;
    k.getdata(50);
    k.getcount();
    return 0;
}
