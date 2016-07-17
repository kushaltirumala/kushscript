import nltk;

sentence ="My name is Kushal and I am nice"
tokens = nltk.word_tokenize(sentence)
for i in tokens:
	print(i)
print "Done"