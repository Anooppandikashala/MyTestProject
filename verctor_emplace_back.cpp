#include<iostream>
#include<vector>


struct student
{
    std::string _name;
    int _id;

    student(int id_, std::string name_)
    :_name(name_),_id(id_)
    {

    }

    student(const student& student_)
    :_name(student_._name),_id(student_._id)
    {
        std::cout<<"Copied"<<std::endl;
    }
};


int main()
{
    std::vector<student> s;

    // s.push_back(student(1,"Anoop"));
    // s.push_back(student(2,"vineeth"));
    
    s.emplace_back(1,"anoop");
    s.emplace_back(2,"vineeth");

}
