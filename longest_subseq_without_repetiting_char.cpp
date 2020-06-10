package linkedlist;
import java.util.Scanner;
import java.util.*;
public class run {

	public static int longest(String s)
	{
		if(s.length()==0)
			return 0;
		Map<Character,Integer> m=new HashMap<Character,Integer>();
		int start=0,end=0;
		int maxlen=0;
		while(end<s.length())
		{
			char currentchar=s.charAt(end);
			{
				if(m.containsKey(currentchar))
					start=Math.max(start,m.get(currentchar)+1);
				m.put(currentchar, end);
				maxlen=Math.max(maxlen, end-start+1);
				end++;
				
			}
			
		}
		return maxlen;
		
	}
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		String s=input.nextLine();
		System.out.println(longest(s));
	}

}
