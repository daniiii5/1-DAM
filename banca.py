peso = float(input("Ingrese el peso levantado (en kg): "))
repeticiones = int(input("Ingrese el número de repeticiones realizadas: "))

# 1RM=(Peso×Repeticiones×0.0333)+Peso
rm1 = (peso * repeticiones * 0.0333) + peso
print(f"El 1RM es: {rm1:.2f} kg")