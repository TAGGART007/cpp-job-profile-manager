#include <iostream>
#include <string>

using namespace std;

class Profiles
{

public:
    string name, degree;
    int Salarylimit, noofExperience;

    void SkilSet()
    {
        cout<<"\n\t Enter the Skill set According to your requirement";
    }
    void Show()
    {

        cout<<"\n\t Show the Profile Details";
    }
};
class SoftwareCompanies : public Profiles
{
public:
    void SkilSet()
    {
        cout<<"\n \t Name : "<<name;
        cout<<"\n \t Degree : "<<degree;
        cout<<"\n \t SalaryLimit : "<<Salarylimit;
        cout<<"\n \t Experience : "<<noofExperience;
    }

};
class medicalRep : public Profiles
{

public:
    void SkilSet()
    {

        cout<<"\nEnter the MedicalRep requirement Name, Degree, SalaryLimit, Experience \n";
        cin>>name;
        cin>>degree;
        cin>>Salarylimit;
        cin>>noofExperience;
    }
    void Show()
    {

        cout<<"\n \t Name : "<<name;
        cout<<"\n \t Degree : "<<degree;
        cout<<"\n \t SalaryLimit : "<<Salarylimit;
        cout<<"\n \t Experience : "<<noofExperience;
    }
};
main()
{
    SoftwareCompanies SR;
    medicalRep MR;
    SR.SkilSet();
    SR.Show();
    MR.SkilSet();
    MR.Show();
}
