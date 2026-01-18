//24006040_sanjanareddy_practicle-1-a
#include <iostream>
using namespace std;
class stu{
    public:
    int rollno, marks;
    string name;
    
    void input(){
        cout<<"enter rollno. =";
        cin>>rollno;
        cout <<"enter name =";
        cin>>name;
        cout<<"enter marks =";
        cin>>marks;
        
    }
    
    void output(){
        cout<<"rollno. ="<<rollno<<"\t";
        cout<<" name ="<<name<<"\t";
        cout<<"  marks ="<<marks;
    }
};

int main (){
    stu s1, s2, s3, s4, s5;
    
    cout  << "entry of stu.1" << endl;
    s1.input();
    cout << "\nentry of stu.2" << endl;
    s2.input();
    cout << "\nentry of stu.3" << endl;
    s3.input();
    cout << "\nentry of stu.4" << endl;
    s4.input();
    cout << "\nentry of stu.5" << endl;
    s5.input();
    
    cout<<"\nstructured format"<<endl;
    cout<<"stuent 1 :-"<<endl;
    s1.output();
    cout<<"\nstudent 2 :-"<<endl;
    s2.output();
    cout<<"\nstudent 3 :-"<<endl;
    s3.output();
    cout<<"\nstudent 4 :-"<<endl;
    s4.output();
    cout<<"\nstudent 5 :-"<<endl;
    s5.output();
    
    return 0;
}
