using System;

class Programa {
    static void Main() {
        Console.Write("Informe a quantidade de glicose: ");
        double glicose = double.Parse(Console.ReadLine());

        if (glicose <= 100)
            Console.WriteLine("Classificação: Normal");
        else if (glicose <= 140)
            Console.WriteLine("Classificação: Elevado");
        else
            Console.WriteLine("Classificação: Diabetes");
    }
}
