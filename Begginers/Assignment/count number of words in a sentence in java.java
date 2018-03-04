import java.util.Scanner;


public class ToCountNumberOfWords
{

	
public static void main(String[] args) 
{
		
Scanner Kb=new Scanner(System.in);
		
System.out.println("Enter a sentence!");
		
while(Kb.hasNext())
{
			
String line=Kb.nextLine();
			
String[] arr=line.split(" ");
			
int word=0;
			
for(int i=0;i<arr.length;i++)
{
				
word++;
			
} 
			
System.out.println(word);
		
}
	
}

}
