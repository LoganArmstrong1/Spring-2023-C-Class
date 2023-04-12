#pragma once
#pragma once
#include <iostream>
using namespace std;
class UCOAdmissions1 {
private:
    string firstName = "Logan";
    string lastName = "Armstrong";
    string email = "logjam004@gmail.com";
    string major = "Forensic Science";
    bool accepted = true;
public:
    UCOAdmissions1(string firstName, string lastName, string email, string major) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->major = major;
        this->accepted = false;
    }
    bool isAccepted() const {
        return accepted;
    }
    void accept() {
        accepted = true;
    }
};
class UCOAdmissions2 {
private:
    string firstName = "Logan";
    string lastName = "Armstrong";
    string email = "logjam004@gmail.com";
    string major = "Forensic Science";
    bool accepted = true;
    bool passedAudition = false;
public:
    UCOAdmissions2(string firstName, string lastName, string email, string major, bool passedAudition) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->major = major;
        this->accepted = false;
        this->passedAudition = passedAudition;
    }
    bool isAccepted() const {
        return accepted;
    }
    void accept() {
        accepted = true;
    }
    bool hasPassedAudition() const {
        return passedAudition;
    }
};
class UCOAdmissions3 {
private:
    string firstName = "Logan";
    string lastName = "Armstrong";
    string email = "logjam004@gmail.com";
    string major = "Forensic Science";
    bool accepted = true;
    int SATscore = 750;
    int ACTscore = 32;

public:
    UCOAdmissions3(string firstName, string lastName, string email, string major, int SATscore, int ACTscore) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->major = major;
        this->accepted = false;
        this->SATscore = SATscore;
        this->ACTscore = ACTscore;
    }

    bool isAccepted() const {
        return accepted;
    }

    void accept() {
        accepted = true;
    }

    int getSATscore() const {
        return SATscore;
    }

    int getACTscore() const {
        return ACTscore;
    }
    void printResult() const {
        std::cout << firstName << " " << lastName << " (" << email << ") has "
            << (accepted ? "been accepted" : "not accepted");
    }
};
int main() {
    UCOAdmissions1;
    UCOAdmissions2;
    UCOAdmissions3;
}
