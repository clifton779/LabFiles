public class foo
{

	public static void main(String[] args)
	{
		int x=0;
		int i=1;
		do
		{
			int s=i*i;
			x=s+x;
			i++;
		} while (i <= 3);

		System.out.print(x);
	}
}
