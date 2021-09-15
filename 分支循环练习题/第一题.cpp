#include <iostream>
using namespace std;
class person{
private:
    string name,sex,number;
public :
    person( string na ,string s,string n){
      name=na;
      sex=s;
    number=n;
    }
    string  getname(){
    return name;
    }
    string getnumber(){
    return number;
    }
    void   show();
};
void person::show(){
cout<<"姓名   "<<name<<endl;
cout<<"编号   "<<number<<endl;
cout<<"性别   "<<sex<<endl;
}
 
 
int main()
{
    person p("张三","男","160693");
    cout<<p.getname()<<endl;
    cout<<p.getnumber()<<endl;
    p.show();
    return 0;
}
