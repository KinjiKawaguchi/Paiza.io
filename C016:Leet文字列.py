S = input();
m = {'A':'4',  'E':'3', 'G':'6', 'I':'1', 'O':'0', 'S':'5', 'Z':'2'}
t = S.translate(str.maketrans(m))
print(t)
