int evalRPN(vector<string>& tokens) {
        stack<long long int>s;
        for(auto x:tokens)
        {
            if(x=="+"|| x=="-"||x=="*"||x=="/")
            {
                long long int operator1,operator2;
                operator1=s.top();
                s.pop();
                operator2=s.top();
                s.pop();
                if(x=="+")
                    s.push(operator2+operator1);
                if(x=="*")
                    s.push(operator2*operator1);
                if(x=="-")
                    s.push(operator2-operator1);
                if(x=="/")
                    s.push(operator2/operator1);
            }
            else
                s.push(stoll(x));
        }
        return s.top();
    }