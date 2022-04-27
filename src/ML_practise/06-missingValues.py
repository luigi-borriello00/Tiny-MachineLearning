"""
    Come gestire i valori mancanti all'interno di un dataset
"""

import numpy as np
from sklearn.compose import ColumnTransformer
# Le classi che si occupano di sostituire i valori mancanti si chiamano Imputer
from sklearn.impute import SimpleImputer

X = [
    [20, np.NaN],
    [25, 'm'],
    [np.NaN, 'f'],
    [np.NaN, np.NaN]
]

transformers = [
    # Di default la strategia utilizzata è il valor medio
    ['age_imputer', SimpleImputer(), [0]],
    # Con fill_value rempiamo i valori mancanti con 'fill_value' come costante
    ['sex_imputer', SimpleImputer(strategy='constant', fill_value='n.d.'), [1]],
]
ct = ColumnTransformer(transformers)
X = ct.fit_transform(X)
print(X)