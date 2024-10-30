using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Baekjoon
{
    class BJ2738
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);

            int[,] A = new int[n, m];
            int[,] B = new int[n, m];

            for (int i = 0; i < n; i++)
            {
                string[] line = Console.ReadLine().Split();
                for (int j = 0; j < m; j++)
                {
                    A[i, j] = int.Parse(line[j]);
                }

            }

            for (int i = 0; i < n; i++)
            {
                string[] line = Console.ReadLine().Split();
                for (int j = 0; j < m; j++)
                {
                    B[i, j] = int.Parse(line[j]);
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    Console.Write(A[i, j] + B[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}