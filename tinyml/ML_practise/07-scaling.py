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
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

ds = load_wine()

# Per visualizzare le informazioni del DS
print(ds['DESCR'])

X = ds['data'][:, [4, 7]]

# Creo un DataFrame (struttura dati con etichette) con i valori presi in considerazione
df = pd.DataFrame(X, columns=['Magnesium', 'Phenols'])

print(f'X = {X} \n DataFrame = {df}')

# Plotto i dati del Df con seaborn
grafico = sb.scatterplot(data=df, x=df['Magnesium'], y=df['Phenols'])
# Setto i range da mostrare sugli assi (utile a vedere la differenza tra le due dimensioni)
#grafico.set(xlim = (-10, 200), ylim = (-10, 200))
plt.title("Before Scaling")
plt.show()
"""
    Notiamo come la varianza sull'asse x sia molto più alta rispetto all'y quindi priviamo a effettuare
    lo scaling utilizzando MinMaxScale ==> prende gli estremi e compatta
"""

scaler = MinMaxScaler()
X = scaler.fit_transform(X)

dfScaled = pd.DataFrame(X, columns=['Magnesium', 'Phenols'])

# Plotto i dati del Df con seaborn
grafico = sb.scatterplot(data=dfScaled, x=dfScaled['Magnesium'], y=dfScaled['Phenols'])
plt.title("After scaling")
plt.show()

"""
    Ora testiamo l'efficenza dello scaling
"""

# Accuratezza senza scalare
X = ds['data']
y = ds['target']
model = KNeighborsClassifier()
model.fit(X, y)
predict = model.predict(X)
acc_not_scaled = accuracy_score(y, predict)

# Accuratezza scalando
X_scaled = scaler.fit_transform(X)
model2 = KNeighborsClassifier()
model2.fit(X_scaled, y)
predict_scaled = model2.predict(X_scaled)
acc_scaled = accuracy_score(y, predict_scaled)

print(f'Not scaled: {acc_not_scaled}, Scaled: {acc_scaled}')




