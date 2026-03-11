def main():
    letras = ['a', 'e', 'i', 'o', 'u']
    contador = [0, 0, 0, 0, 0]
    mayus = 0
    minus = 0
    vowels = 0

    print("Introduce 10 letras: ")
    for _ in range(10):
        charVar = input().strip()
        if len(charVar) == 0:
            continue
        charVar = charVar[0]

        if 'a' <= charVar <= 'z':
            minus += 1
        if 'A' <= charVar <= 'Z':
            mayus += 1
            charVar = chr(ord(charVar) + (ord('a') - ord('A')))

        for j in range(5):
            if charVar == letras[j]:
                contador[j] += 1
                vowels += 1

    print(f"Introduciste {mayus} mayusculas, {minus} minusculas, y {vowels} vocales.")
    print(f"a={contador[0]}\ne={contador[1]}\ni={contador[2]}\no={contador[3]}\nu={contador[4]}")

if __name__ == "__main__":
    main()