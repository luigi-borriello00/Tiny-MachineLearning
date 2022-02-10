import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import RobustScaler
from sklearn.compose import ColumnTransformer
from sklearn.metrics import mean_absolute_error
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import OneHotEncoder


def trainAndTest(X, y):
    X_train, X_test, y_train, y_test = train_test_split(X, y)

    model = LinearRegression()
    model.fit(X_train, y_train)

    p_train = model.predict(X_train)
    err_train = mean_absolute_error(y_train, p_train)
    p_test = model.predict(X_test)
    err_test = mean_absolute_error(y_test, p_test)
    print(f'Errore Train {err_train}, Test {err_test}')


df = pd.read_csv('Notebooks/ds/hour.csv')

y = df['cnt']
col_to_remove = ['cnt', 'casual', 'registered', 'dteday', 'instant']
X = df.drop(col_to_remove, axis=1)

print("Situazione iniziale: ")
trainAndTest(X, y)

""" 
    Notiamo un errore abbastanza grossolano nel modello dunque proviamo a migliorarlo:
    Avendo stagioni, anno, mese, ora, giornodellasett, condizioni climatiche che sono effettivamente
    delle categorie (anche se sotto forma di intero), proviamo a trasformarle.
    
    In generale: ci accorgiamo che su dei valori interi come in questo caso, non ha senso effettuare
    operazioni aritmetiche, allora ==> sono categorie
"""


transformers = [
    ['oneHot', OneHotEncoder(), ['season', 'yr', 'mnth', 'hr', 'weekday', 'weathersit']],
    ['scaler', RobustScaler(), ['temp', 'hum', 'atemp', 'windspeed']]
]

cf = ColumnTransformer(transformers, remainder='passthrough')

X = cf.fit_transform(X)

print("Dopo la trasformazione: ")
trainAndTest(X, y)

"""
    Notiamo già un miglioramento con il Transformer mentre lo Scaling in questo caso si è rivelato
    "inutile"
"""




