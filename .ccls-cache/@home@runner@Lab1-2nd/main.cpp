#include <iostream>

using namespace std;

int main() {
  
  string firstName, lastName;
  int day, month, year;
  cout<<"Write your last name : "<<endl;
  cin>>lastName;
  cout<<"Write your first name : "<<endl;
  cin>>firstName;
  cout<<"Write the today's date MM:DD:YY : "<<endl;
  cin>>month>>day>>year;
  while(month>12||day>31||year>2022||year<2000)
  {
    cout<<"You must enter a valid date"<<endl;
    cin>>month;
    cin>>day;
    cin>>year;
    
  }
  cout<<"\n""\n";

  cout<<"Your name : "<<lastName<<",      ,"<<firstName<<endl;
  cout<<"Today's date: "<<month<<":"<<day<<":"<<year<<endl;

  return 0;
}