from cs50 import get_string

text = get_string("Text: ")


nw = 1
ns = 0
nl=0
n=len(text)
for i in range(n):
    if text[i] == ' ':
        nw += 1 #counting words

    elif (text[i] >= 'a' and text[i] <= 'z') or ( text[i] >= 'A' and text[i] <= 'Z') :
        nl += 1 #counting letters
        

    elif text[i] == '.' or text[i] == '?' or text[i] == '!':
        ns += 1 #counting sentences

L= (nl/nw)*100

S= (ns /nw)*100

index =((0.0588*L) - (0.296*S)-15.8)
index= round(index)


if  index < 1:
    print("Before Grade 1")

elif index > 16:
    print("Grade 16+")

else:
    print(f"Grade",int(index)")
