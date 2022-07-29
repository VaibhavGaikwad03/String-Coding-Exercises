import java.lang.*;
import java.util.*;


class Search
{
    public String SearchChallenge(String str)
    {
        String SplitStr[] = str.split(" ");
        char chArray[] = null;
        int Count = 0, i = 0, j = 0, k = 0;

        outerloop : 
        for(i = 0; i < SplitStr.length; i++)
        {
            chArray = SplitStr[i].toCharArray();
            for(j = 0; j < chArray.length; j++)
            {
                Count = 0;
                for(k = 0; k < chArray.length; k++)
                {
                    if(chArray[j] == chArray[k])
                    {
                        Count++;
                        if(Count > 1)
                        {
                            break outerloop;
                        }
                    }
                    
                }
            }
        }
        if(Count > 1)
        {
            return SplitStr[i];
        }
        else
        {
            return "-1";
        }
    }
}

class Test
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String sRet = null;

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        Search shobj = new Search();
        sRet = shobj.SearchChallenge(str);

        System.out.println(sRet);
    }
}