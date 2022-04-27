import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.neural_network import MLPRegressor
from sklearn.metrics import mean_absolute_error
from sklearn.model_selection import train_test_split

np.random.seed(0)
X = np.arange(0, 10, 0.2)
n = len(X)

y = np.cos(X) + 2 * np.random.random(n)

# Prima di splittare le X devo rendere ogni elemento come un array
X = np.expand_dims(X, axis=1)

X_train, X_test, y_train, y_test = train_test_split(X, y)

# Con neural = [1] ho UnderFitting
# Con neural = [100, 100, 100, 100] ho Overfitting
neural = [50]
model = MLPRegressor(hidden_layer_sizes=neural, max_iter=10000, tol=-1, verbose=2)
model.fit(X_train, y_train)

p_train = model.predict(X_train)
p_test = model.predict(X_test)
p = model.predict(X)

mea_train = mean_absolute_error(y_train, p_train)
mea_test = mean_absolute_error(y_test, p_test)
print(f'Train {mea_train}, Test {mea_test}')

# Plottiamo le varie predizioni e la linea di apprendimento generale del modello
sns.scatterplot(x=X_train[:, 0], y=y_train)
sns.scatterplot(x=X_test[:, 0], y=y_test)
sns.lineplot(x=X[:, 0], y=p)
plt.show()
