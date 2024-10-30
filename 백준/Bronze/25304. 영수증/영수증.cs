int result = int.Parse(Console.ReadLine());
int n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    int price = input[0];
    int count = input[1];

    result -= price * count;
}

if(result == 0)
    Console.WriteLine("Yes");
else
    Console.WriteLine("No");