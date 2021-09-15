    #include<iostream>
class Clock
{
    int hour,minute,second;
public:
    void Set_time(int a,int b,int c);
    void Show_time();
};

void Clock::Set_time(int a,int b,int c)
{
    minute=(b%60+c/60);
    hour=(a+b/60);
    second=c%60;
}
void Clock::Show_time()
{
    using namespace std;
        cout<<"现在的时间是: "<<hour<<":"<<minute<<":"<<second<<"."<<endl;
}
int main()
{
using namespace std;
Clock j;
Clock * p=&j;
p->Set_time(21,76,84);
p->Show_time();
return 0;
}
