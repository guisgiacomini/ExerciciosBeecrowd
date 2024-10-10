n = int(input())
set = []
dicionario = {}

for x in range(n):
    num = int(input())
    if num not in set:
        set.append(num)
        dicionario.update({num : 1})
    else :
        dicionario[num] += 1

for num in sorted(dicionario.keys()):
    print(f'{num} aparece {dicionario[num]} vez(es)')
