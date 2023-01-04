class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;
        int n = tokens.size();
        for(int i=0;i<n;i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int r = s.top();
                //cout << s.top() << endl;
                s.pop();
                
                int l = s.top();
                s.pop();
                //cout << l << " " << r << endl;
                if(tokens[i] == "+")
                    s.push(l+r);
                else if(tokens[i] == "-")
                    s.push(l-r);
                else if(tokens[i] == "*")
                    s.push(l*r);
                else if(tokens[i] == "/")
                    s.push(l/r);

            }
            else {
                int temp = stoi(tokens[i]);
                s.push(temp);
            }
        }
        return s.top();
    }
};
