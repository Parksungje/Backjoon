class Program
{
    static void Main(string[] args)
    {
        // 입력받기
        string[] s = Console.ReadLine().Split(' ');
        int a = int.Parse(s[0]);
        int b = int.Parse(s[1]);
        int c = int.Parse(s[2]);
        int d = int.Parse(s[3]);
        int e = int.Parse(s[4]);
        int f = int.Parse(s[5]);

        // 모든 값 대입해보기
        for (int i = -999; i <= 999; i++)
        {
            for (int j = -999; j <= 999; j++)
            {
                // 두개의 방정식을 동시에 만족한다면
                if(a*i + b*j == c && d*i + e*j == f)
                {
                    Console.WriteLine($"{i} {j}");
                    break;
                }
            }
        }
    }
}