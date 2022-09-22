//WAP to generate all pythagorean triples with value smaller that given limit A
#include <stdio.h>
 
int main() 
{
    static void pythagoreanTriplets(int limit)
    {
        int a, b, c = 0;
        int m = 2;
        while (c < limit) {
            for (int n = 1; n < m; ++n)
            {
                a = m * m - n * n;
                b = 2 * m * n;
                c = m * m + n * n;
 
                if (c > limit)
                    break;
 
                Console.WriteLine(a + " "
                            + b + " " + c);
            }
            m++;
        }
    }
    public static void Main()
    {
        int limit = 20;
        pythagoreanTriplets(limit);
    }
}
