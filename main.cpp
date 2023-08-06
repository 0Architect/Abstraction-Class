#include <iostream>

class Smartphone
{
    public:
        virtual void TakeASelfie() = 0;
        virtual void MakeACall() = 0;
};

class Android : public Smartphone
{
    public:
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
    Smartphone* s1 = new Android();
    s1->TakeASelfie();
    s1->MakeACall();

    Smartphone* s2 = new IPhone();
    s2->TakeASelfie();
    s2->MakeACall();
    return 0;
}