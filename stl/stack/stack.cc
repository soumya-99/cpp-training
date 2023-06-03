#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const* argv[]) {
    stack<string> st;

    stack<string> st2;
    st2.push("go");
    st2.push("went");
    st2.push("gone");

    st.push("Soumya");
    st.push("Soham");
    st.push("Niladri");
    st.push("Rajdeep");
    st.push("Sucharita");

    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element: " << st.top() << endl;

    cout << "Size of Stack: " << st.size() << endl;

    st.swap(st2);

    return 0;
}
