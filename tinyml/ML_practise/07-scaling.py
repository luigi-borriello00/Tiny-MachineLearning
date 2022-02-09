"""
    Riduzione della varianza dei dati nel piano (i punti vengono compattati)
    Lo scaling dei valori nel piano è importante per equalizzare l'impatto delle feature
    e per velocizzare l'apprendimento.
"""

from sklearn.datasets import load_wine
import pandas as pd
# Seaborn è un wrapper di Matplotlib
import seaborn as sb
import matplotlib.pyplot as plt
from sklearn.preprocessing import MinMaxScaler

ds = load_wine()

# Per visualizzare le informazioni del DS
print(ds['DESCR'])

X = ds['data'][:, [4, 7]]

scaler = MinMaxScaler()
X = scaler.fit_transform(X)

# Creo un DataFrame (struttura dati con etichette) con i valori presi in considerazione
df = pd.DataFrame(X, columns=['Magnesium', 'Phenols'])

print(f'X = {X} \n DataFrame = {df}')

# Plotto i dati del Df con seaborn
grafico = sb.scatterplot(data=df, x=df['Magnesium'], y=df['Phenols'])
# Setto i range da mostrare sugli assi (utile a vedere la differenza tra le due dimensioni)
#grafico.set(xlim = (-10, 200), ylim = (-10, 200))

"""
    Notiamo come la varianza sull'asse x sia molto più alta rispetto all'y quindi priviamo a effettuare
    lo scaling utilizzando MinMaxScale ==> prende gli estremi e compatta
"""

plt.show()

