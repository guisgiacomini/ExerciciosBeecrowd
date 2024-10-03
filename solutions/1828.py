def jokenpo(sheldon, raj):
  if sheldon == raj:
    return 0
  elif sheldon == 'pedra':
    if raj == 'lagarto' or raj == 'tesoura':
      return 1
    else:
      return -1
  elif sheldon == 'papel':
    if raj == 'pedra' or raj == 'Spock':
      return 1
    else:
      return -1
  elif sheldon == 'tesoura':
    if raj == 'papel' or raj == 'lagarto':
      return 1
    else:
      return -1
  elif sheldon == 'lagarto':
    if raj == 'papel' or raj == 'Spock':
      return 1
    else:
      return -1
  elif sheldon == 'Spock':
    if raj == 'tesoura' or raj == 'pedra':
      return 1
    else:
      return -1

n = int(input())
for i in range(n):
  x, y = input().split()
  jogo = jokenpo(x, y)
  if jogo == -1:
    print(f'Caso #{i+1}: Raj trapaceou!')
  elif jogo == 0:
    print(f'Caso #{i+1}: De novo!')
  else:
    print(f'Caso #{i+1}: Bazinga!')