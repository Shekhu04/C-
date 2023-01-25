bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s; //creating a stack of character type

    for(int i=0; i<expression.length(); i++) //traversing the expression
    {
        char ch = expression[i];

        if (ch == '(' || ch == '{' ||
            ch == '[') // if opening bracket then push in stack
        {
          s.push(ch);
        }
        else  //if closing bracket then take stacktop and check
        {
          if (!s.empty()) {
            char top = s.top(); // creating a char top and storing top element
                                // of stack
            if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
              s.pop();
            }

            else {
              return false;
            }
          } else {
            return false;
          }
        }
    }
    if(s.empty()) //if stack is empty then the parentheses are valid
    return true;
    else
    return false;
}
