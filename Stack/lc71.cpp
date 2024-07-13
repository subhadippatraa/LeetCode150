class Solution {
public:
    string simplifyPath(string path) {

        int n = path.size();
        stack<string> st;

        for (int i = 0; i < n; i++) {

            if (path[i] == '/')
                continue;
            else {
                string ns = "";
                while (i < n && path[i] != '/') {
                    ns += path[i++];
                }
                if (ns == "..") {
                    if (!st.empty()) {
                        st.pop();
                    }
                }
                else if (ns == ".")
                    continue;
                else
                    st.push(ns);
            }
        }
        string newString = "";
        while (!st.empty()) {
            newString = "/" + st.top() + newString;
            st.pop();
        }
        return (newString.size() > 0 ? newString : "/");
    }
};