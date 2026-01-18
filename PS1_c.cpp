//24006040_sanjanareddy_practicle-1-c
#include <iostream>
using namespace std;
class DataRecord {
public:
    string name;
    int age, income, score;
    
    void input(){
        cout<<"enter name :";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter income: ";
        cin>>income;
        cout<<"enter score: ";
        cin>>score;
    }
    int getsum() {
        return age + income + score;
    }
    double getaverage() {
        return (age + income + score) / 3;
    }
};

int main() {
    DataRecord r1, r2, r3, r4, r5;
    cout<<"enter row 1"<<endl;
    r1.input();
    cout<<"\nenter row 2"<<endl;
    r2.input();
    cout<<"\nenter row 3"<<endl;
    r3.input();
    cout<<"\nenter row 4"<<endl;
    r4.input();
    cout<<"\nenter row 5"<<endl;
    r5.input();
    
    //row (sum and average)
    cout << "\nrow-wise Statistics" << endl;
    cout << r1.name <<"\t"<< "Sum: " << r1.getsum() << "\t"<<"Avg: " << r1.getaverage() << endl;
    cout << r2.name << "\t"<< "Sum: " << r2.getsum() << "\t"<<"Avg: " << r2.getaverage()<< endl;
    cout << r3.name << "\t"<<"Sum: " << r3.getsum() << "\t"<<"Avg: " << r3.getaverage() << endl;
    cout << r4.name << "\t"<<"Sum: " << r4.getsum() << "\t"<<"Avg: " << r4.getaverage() << endl;
    cout << r5.name << "\t"<<"Sum: " << r5.getsum() << "\t"<<"Avg: " << r5.getaverage() << endl;

   //total average (featurewise)
    double avgAge = (r1.age + r2.age + r3.age + r4.age + r5.age) / 5;
    double avgIncome = (r1.income+ r2.income+ r3.income+ r4.income+r5.income) / 5;
    double avgScore = (r1.score + r2.score + r3.score +r4.score + r5.score) / 5;

    cout << "\ncolumn-wise Averages ---" << endl;
    cout << "Average Age: " << avgAge << endl;
    cout << "Average Income: " << avgIncome << endl;
    cout << "Average Score: " << avgScore << endl;

    return 0;
}
