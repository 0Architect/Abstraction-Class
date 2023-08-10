#include <iostream>
#include <string>

using std::string;

class Smartphone
{
private:
    friend std::ostream &operator<<(std::ostream &out, Smartphone &s);
    string name;
    string id;

protected:
    Smartphone() {}
    Smartphone(const string &name, const string &id) : name(name), id(id) {}

public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

std::ostream &operator<<(std::ostream &out, Smartphone &s)
{
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "ID: " << s.id << std::endl;

    return out;
}

class Android : public Smartphone
{
public:
    Android() {}

    Android(const string &name, const string &id) : Smartphone(name, id) {}

    void TakeASelfie()
    {
        std::cout << "Android Selfie\n";
    }

    void MakeACall()
    {
        std::cout << "Android Calling\n";
    }
};

class IPhone : public Smartphone
{
public:

    IPhone() {}
    IPhone(const string &name, const string &id) : Smartphone(name, id) {}

    void TakeASelfie()
    {
        std::cout << "IPhone Selfie\n";
    }

    void MakeACall()
    {
        std::cout << "IPhone Calling\n";
    }
};

int main()
{

    Smartphone *s1 = new Android();
    s1->TakeASelfie();
    s1->MakeACall();

    Smartphone *s2 = new IPhone();
    s2->TakeASelfie();
    s2->MakeACall();

    std::cout << *s1 << *s2;

    delete s1;
    delete s2;
    return 0;
}


