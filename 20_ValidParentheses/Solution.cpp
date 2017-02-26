class Solution {
public:
    bool isValid(string s) {
    	unordered_map<char, char> m;
    	m['}'] = '{';
    	m[']'] = '[';
    	m[')'] = '(';
        stack<char> myStack;
        for(int i = 0; i < s.length(); i++){
        	if(m.find(s[i])!=m.end()){
        		if(myStack.empty()||myStack.top()!=m[s[i]]){
        			return false;
        		}
        		myStack.pop();
        	}else{
        		myStack.push(s[i]);
        	}
        }
        return myStack.empty();
    }