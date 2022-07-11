# Pandas permette di includere file di molteplici tipologie (usato per caricare il csv)
# e di gestire agevolmente strutture dati organizzate
import pandas as pd
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import BernoulliNB
from sklearn.metrics import accuracy_score


dataframe = pd.read_csv('movie_review.csv')
print(dataframe.head())

X = dataframe['text']
y = dataframe['tag']

vect = CountVectorizer(ngram_range=(1,2))
# Fit va fatto solo una volta essendo l'addestramento
vect.fit(X)

# Transform effettua la trasformazione vera e propria quindi può essere ripetuto
X = vect.transform(X)
X_train, X_test, y_train, y_test = train_test_split(X, y)

model = BernoulliNB()

model.fit(X_train, y_train)

p_train = model.predict(X_train)
p_test = model.predict(X_test)

acc_train = accuracy_score(y_train, p_train)
acc_test = accuracy_score(y_test, p_test)

print(f'Train: {acc_train}, Test: {acc_test}')
