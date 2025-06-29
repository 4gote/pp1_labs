#include <iostream> 
#include <deque> 
using namespace std;
int main() {
    deque<int> dq;
    int input;
    cout << "Push front: ";
    cin >> input;
    dq.push_front(input);
    dq.push_front(input);
    cout << "Push back: ";
    cin >> input;
    cout << "Another push front: ";
    cin >> input;
    dq.push_back(input);
    cout << "\nDeque contents: ";
    for (size_t i = 0; i < dq.size(); i++) {  
        cout << dq[i] << " ";
    }
    cout << endl;
    cout << "\nPop back: " << dq.back() << endl;
    dq.pop_back(); 
    cout << "Pop front: " << dq.front() << endl;
    dq.pop_front();
    cout << "\nRemaining element: " << dq.front() << endl;
    return 0;
}
