using System;

class Programa {
    static void Main() {
        Console.WriteLine("Códigos de destino:");
        Console.WriteLine("1 - Morros (R$ 120,00)");
        Console.WriteLine("2 - Barreirinhas (R$ 200,00)");
        Console.WriteLine("3 - Bacabeira (R$ 50,00)");
        Console.WriteLine("4 - Rosário (R$ 80,00)");

        Console.Write("Digite o código do destino: ");
        int cod = int.Parse(Console.ReadLine());

        double valor = 0;
        switch (cod) {
            case 1: valor = 120; break;
            case 2: valor = 200; break;
            case 3: valor = 50; break;
            case 4: valor = 80; break;
            default:
                Console.WriteLine("Código inválido!"); return;
        }

        Console.Write("Ida e volta (s/n)? ");
        char resp = char.Parse(Console.ReadLine().ToLower());

        if (resp == 's')
            valor *= 2 * 0.9; // ida e volta com 10% de desconto
        else
            valor *= 1;

        Console.WriteLine($"Valor total da passagem: R$ {valor:F2}");
    }
}
