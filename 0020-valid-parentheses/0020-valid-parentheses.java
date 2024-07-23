class Solution {
    public boolean isValid(String s) {
        Stack <Character> stack = new Stack<>();
        Stack <Character> temp = new Stack <>();
        temp.push('/');
        for (int i=0;i<s.length();i++)
        {
            stack.push(s.charAt(i));
        }
        while (!stack.isEmpty())
        {
              
            if (stack.peek()=='}' || stack.peek()==']' || stack.peek()==')')
            {
                temp.push(stack.peek());
                stack.pop();
                System.out.println(1);
            }
            else if (stack.peek()=='{' && temp.peek()=='}')
            {
               stack.pop();
                temp.pop();
                System.out.println(2);
            }
             else if (stack.peek()=='(' && temp.peek()==')')
            {
               stack.pop();
                temp.pop();
                 System.out.println(3);
            }
             else if (stack.peek()=='[' && temp.peek()==']')
            {
               stack.pop();
                temp.pop();
                 System.out.println(4);
            } 
            else {
                  temp.push(stack.peek());
                stack.pop();
                System.out.println(5);
            }
        }
        if (temp.peek()=='/')
        {
         System.out.println("meedoo");
            return true;
        }
        else 
            return false;
    }
}