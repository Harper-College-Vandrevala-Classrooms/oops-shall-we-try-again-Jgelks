#include <iostream>
#include <cassert>
using namespace std;

int numberValidator(int lowerBound, string prompt, string validResponse, string invalidResponse, int upperBound)
{
    int input;
    bool invalid = true;
    cout << prompt << endl;
    cout << "Your lower bound is " << lowerBound << " and your upper bound is " << upperBound << endl;
    while (invalid)
    {
        cin >> input;
        if (input > lowerBound && input < upperBound)
        {
            invalid = false;
            cout << validResponse << endl;
        }
        else{
            cout << invalidResponse << endl;
        }
    }
return input;
}
int numberValidator(string prompt, string validResponse, string invalidResponse, int upperBound)
{
    int input;
    bool invalid = true;
    cout << prompt << endl;
    cout << "Your upper bound is " << upperBound << endl;
    while (invalid)
    {
        cin >> input;
        if (input < upperBound)
        {
            invalid = false;
            cout << validResponse << endl;
        }
        else{
            cout << invalidResponse << endl;
        }
    }
return input;
}
int numberValidator(int lowerBound,string prompt, string validResponse, string invalidResponse)
{
    int input;
    bool invalid = true;
    cout << prompt << endl;
    cout << "Your lower bound is " << lowerBound << endl;
    while (invalid)
    {
        cin >> input;
        if (input > lowerBound)
        {
            invalid = false;
            cout << validResponse << endl;
        }
        else{
            cout << invalidResponse << endl;
        }
    }
return input;
}

int main()
{
assert(numberValidator(0,"Please enter a valid input:", "That is valid.", "That is not valid.", 50) == 35);
assert(numberValidator(5,"Please enter a valid number:", "That is a valid response.", "That is not a valid input.") == 35);
assert(numberValidator("Please enter a valid integer:", "That works!", "Please try again.", 55) == 35);

    return 0;
}