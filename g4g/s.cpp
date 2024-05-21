#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
stack<int> _push(int arr[],int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
        v.push_back(arr[i]);
    }
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    int mini = s.top();
    while (!v.empty()) {
        if (v.back() == mini) {
            v.pop_back();
			mini = v[std::min_element(v.begin(), v.end())-v.begin()];
		} else 
            v.pop_back();
        printf("%d ", mini);
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		stack<int>mys=_push(arr,n);
		_getMinAtPop(mys);
		cout<<endl;
	}
	return 0;
}
