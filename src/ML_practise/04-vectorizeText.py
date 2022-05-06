""" Vettorizzazione dei Testi

    Test ===> Numeri    """

from sklearn.feature_extraction.text import CountVectorizer

X = [
    'ciao',
    'miao bao',
    'bao ciao',
    'ciao miao'
]

# CountVectorizer opera simile a OneHotEncoder salvandosi per ogni riga il n° di occorrenze
vect = CountVectorizer()
vect.fit(X)
X = vect.transform(X)
# Stampo i valori presi per la Trasformazione
print(vect.get_feature_names())
print(X.todense())
# Per risparmiare Ram SKlearn utilizza di suo questa notazione
print(f'(Riga, Parola) n_comparse \n{X}')

# E' possibile anche eseguire la trasformazione inversa
print(f'Inversa : \n {vect.inverse_transform(X[:2])}')