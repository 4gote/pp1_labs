#include <iostream>
#include <vector>
using namespace std;

double average(const vector<int>& v) {
    double sum = 0;
    for(vector<int>::const_iterator it=v.begin(); it!=v.end(); ++it)
        sum += *it;
    return v.empty() ? 0 : sum/v.size();
}

int main() {
    int nums[] = {5,10,15,20,25};
    vector<int> v(nums, nums+5);
    cout << "Average: " << average(v);
}