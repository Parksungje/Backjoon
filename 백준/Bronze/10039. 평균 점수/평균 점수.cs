class BJ10039
{
    static void Main(string[] args)
    {
        int n1 = int.Parse(Console.ReadLine());
        int n2 = int.Parse(Console.ReadLine());
        int n3 = int.Parse(Console.ReadLine());
        int n4 = int.Parse(Console.ReadLine());
        int n5 = int.Parse(Console.ReadLine());

        if(n1 <= 40)
        {
            n1 = 40;
        }
        if (n2 <= 40)
        {
            n2 = 40;
        }
        if (n3 <= 40)
        {
            n3 = 40;
        }
        if (n4 <= 40)
        {
            n4 = 40;
        }
        if (n5 <= 40)
        {
            n5 = 40;
        }
        Console.WriteLine((n1 + n2 + n3 + n4 + n5) / 5);
    }
}