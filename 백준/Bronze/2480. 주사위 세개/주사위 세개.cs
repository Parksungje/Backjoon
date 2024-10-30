int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
{
    if (input[0] == input[1] && input[2] == input[1])
    {
        Console.WriteLine(10000 + input[0] * 1000);
    }
    else if (input[0] == input[1] || input[0] == input[2])
    {
        Console.WriteLine(1000 + input[0] * 100);
    }
    else if (input[1] == input[2])
    {
        Console.WriteLine(1000 + input[1] * 100);
    }
    else
    {
        int max = int.MinValue;
        foreach (int i in input)
        {
            if (max < i)
                max = i;
        }
        Console.WriteLine(max*100);
    }
}