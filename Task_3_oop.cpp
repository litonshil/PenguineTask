#include<bits/stdc++.h>
using namespace std;
char option;
vector< pair <string,string> > info;
vector<pair<pair<int, int>, string >> routine;

class ClassInfo
{
public:
    void storeData(void);
    void part(void);
    void part1(char);

};

void ClassInfo:: storeData()
{
    info.push_back({"English Grammar","John Smith"});
    info.push_back({"Mathematics","Lara Gilbert"});
    info.push_back({"Physics","Johanna Kabir"});
    info.push_back({"Chemistry","Danniel Robertson"});
    info.push_back({"Biology","Larry Cooper"});

}

void ClassInfo::part()
{
    cout<<"A. Create Routine"<<endl;
    cout<<"B. Show Routine"<<endl;
    cout<<"C. List Courses with Teachers Name"<<endl;
    cout<<"Please Select One Option: A/B/C"<<endl;

    cin>>option;
    if(option == 'C')
    {
        for(auto item: info)
        {
            cout<<item.first<<", "<<item.second<<endl;
        }
    }
    else
    {
        ClassInfo obj;
        obj.part1(option);
    }
}
void ClassInfo::part1(char option)
{

    if(option=='A')
    {
        int i=1;
        for(auto item:info)
        {

            cout<<i<<". "<<item.first<<endl;
            i++;
        }
        int dayIndex,hourIndex,courseIndex;
        cin>>dayIndex>>hourIndex>>courseIndex;
        string course = info[courseIndex].first;
        //cout<<course;
        routine.push_back({{dayIndex,hourIndex},course});
        ClassInfo obj;
        obj.part();

    }
    else
    {
        for(int i = 0; i < (int) routine.size(); i++)
        {
            cout << routine[i].first.first << " " << routine[i].first.second << " " << routine[i].second << '\n';

        }
    }
}

int main()
{
    ClassInfo obj;
    obj.storeData();
    obj.part();
}
