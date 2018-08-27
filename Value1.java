import java.lang.*;


class LesserException extends Exception
{
	LesserException()
	{
	System.out.println("Lesser Exception");
	}
}

   
 class GreaterException extends Exception
{
	GreaterException()
	{
	System.out.println("Greater Exception");
	}
}

   
public class Value1
{
public static void main(String args[])
{
	


      	Integer i = new Integer("20");
 
	Integer j=new Integer("40");
	if (i<j)
	{
	try
	{
		throw new LesserException();
	}
	catch(LesserException e)
	{
		System.out.println("Exception Araised for Lesser");
	}
	}
	else if(i>j)
	{	

	try
	{
		throw new GreaterException();
	}
	catch(GreaterException e)
	{
		System.out.println("Exception Araised for Greater");
	}
	}
	else
	{
		System.out.println("equal");
	}
	try
	{
		System.out.println(" ");
	}
     	finally
	{
		System.out.println("Finished Program-3");		
	}
 }

}