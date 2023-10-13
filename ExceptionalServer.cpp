#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};

int Server::load = 0;

int execute(long a, long b)
{
    try
    {
        cout << Server::compute(a, b) << endl;
    }

    catch(const std::exception& e)
    {
        cout << e.what() << '\n';
    }

    catch(...)
    {
        cout << "Other Exception" << endl;
    }

    
    cout << Server::getLoad() << endl;
}