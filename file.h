#include <bits/stdc++.h>
using namespace std;
void func(int point){
      string name;

      ofstream file;
      file.open("highscore.txt",ios::out|ios::app);

      cout<<"ENTER YOUR NAME: "<<endl;
      getline(cin>>ws,name);

      string str= to_string(point);
      if(point<10)str="0"+str;
      str=str+" "+name;

      file<<str<<endl;
      file.close();
      cout<<"Result saved"<<endl;
      return;
}
