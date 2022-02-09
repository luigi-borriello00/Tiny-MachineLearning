""" Vettorizzazione delle categorie """
from sklearn.compose import ColumnTransformer
from sklearn.preprocessing import OneHotEncoder

# OneHotEncoder effettua trasformazioni sulle mie colonne
# Ad esempio per ogni cat. di sport, creerà una colonna a 1 solo se a quella riga corrisponde quello sport
X = [
    [110, 1.7, 'rugby'],
    [100, 1.9, 'basket'],
    [120, 1.9, 'rugby'],
    [70, 1.6, 'soccer']
]


transformers = [
    ['cat_vect', OneHotEncoder(), [2]]
]

# Remainder serve a conservare le altre colonne
ct = ColumnTransformer(transformers, remainder='passthrough')

ct.fit(X)
X = ct.transform(X)

print(X)
