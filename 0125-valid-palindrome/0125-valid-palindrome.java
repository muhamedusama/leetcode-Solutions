class Solution {
    public boolean isPalindrome(String s) {
        Stack <Character> stack = new Stack <>();
        Queue <Character> q = new LinkedList<>();
        for (int i=0;i<s.length();i++)
        {
            if (s.charAt(i)>='0'  && s.charAt(i)<='9')
            {
                  stack.push(s.charAt(i));
                q.add(s.charAt(i));
            }
            if (s.charAt(i)>='a' && s.charAt(i)<='z')
              {
                  stack.push(s.charAt(i));
                q.add(s.charAt(i));
            }
            if (s.charAt(i)>='A' && s.charAt(i)<='Z')
              {
                stack.push((char)(s.charAt(i)+32));
                q.add((char)(s.charAt(i)+32));
            }
            else
           continue;
        }
        for (int i=0;i<stack.size();i++)
        {
            System.out.println(stack.peek());
            System.out.println(q.peek());
            if (stack.peek()!=q.peek())
                return false;
            stack.pop();
            q.poll();
        }
        return true;
    }
}