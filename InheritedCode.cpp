#include "InheritedCode.hpp"
#include <exception>
#include <sstream>

using namespace std;

struct BadLengthException : public exception
{
    const int length;
    BadLengthException(const int n) : length(n) {}
    const char* what () const throw ()
    {
        int copy = length;
        stringstream ss;
        ss << "Too short: " << copy << endl;
        return ss.str().c_str();
    }
};

bool checkUsername(std::string username)
{
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	
    for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}