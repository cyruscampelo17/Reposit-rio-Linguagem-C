using System;

class Programa {
    static void Main() {
        Console.Write("Altura (m): ");
        double altura = double.Parse(Console.ReadLine());
        Console.Write("Peso (kg): ");
        double peso = double.Parse(Console.ReadLine());

        double imc = peso / (altura * altura);

        Console.WriteLine($"Seu IMC é {imc:F2}");
    }
}
