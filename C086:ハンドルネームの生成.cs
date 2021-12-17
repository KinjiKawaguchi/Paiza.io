using System;

class Program
{
    static void Main()
    {
        string str;
        str = Console.ReadLine();
        char[] removeChars = new char[] { 'a', 'i','u','e','o' ,'A','I','U','E','O'};
        foreach (char c in removeChars) str = str.Replace(c.ToString(), "");
        Console.WriteLine(str);
    }
}
