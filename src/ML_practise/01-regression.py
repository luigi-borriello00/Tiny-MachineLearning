from sklearn.datasets import load_boston
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error
from sklearn.model_selection import train_test_split
import numpy as np

# Importante, altrimenti ad ogni esecuzione si avrebbero sempre risultati diversi
np.random.seed(2)

# Preparo il dataset
dataset = load_boston()

# Divido le colonne target dalle rimanenti
X = dataset["data"]
y = dataset["target"]

# Divido le X e y di Train e di Test
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3)

# Creo il modello
model = LinearRegression()

# Addestro il modello
model.fit(X_train, y_train)

# Testo il modello
pred_test = model.predict(X_test)
pred_train = model.predict(X_train)

# Misuro accuratezza
mae_test = mean_absolute_error(y_test, pred_test)
mae_train = mean_absolute_error(y_train, pred_train)
print(mae_train)
print(mae_test)